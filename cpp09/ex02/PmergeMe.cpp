/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:39:38 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/17 18:58:25 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& copy) : _vec(copy._vec), _deq(copy._deq), _extra(false) {}

PmergeMe::~PmergeMe(){}

PmergeMe& PmergeMe::operator=(const PmergeMe& copy) {
	if (this != &copy) {
		_vec = copy._vec;
		_deq = copy._deq;
		_extra = copy._extra;
	}
	return (*this);
}

int PmergeMe::addNumber(int nb) {
	if (std::find(_vec.begin(), _vec.end(), nb) != _vec.end()) {
		return (1);
	}
	_vec.push_back(nb);
	_deq.push_back(nb);
	return (0);
}

void PmergeMe::vecSort() {
	std::vector<int> to_sort = _vec;
	if (to_sort.size() < 2)
		return ;
	std::vector<std::pair<int, int> > chain;
	for (size_t i = 0; i < to_sort.size(); ++i)
		chain.push_back(std::make_pair(to_sort[i], i));
	vecSortRecur(chain);
	_vec.clear();
	for (size_t i = 0; i < chain.size(); ++i) {
		_vec[i] = chain[i].first;
		std::cout << _vec[i] << std::endl;
	}
	std::cout << "\n";
}

void PmergeMe::vecSortRecur(std::vector<std::pair<int, int> > &chain) {
	if (chain.size() < 2)
		return ;
	bool has_straggler = false;
	std::pair<int, int> straggler;
	std::vector<std::pair<int, int> >looser(_vec.size());
	std::vector<std::pair<int, int> > winners;
	for(size_t i = 0; i < chain.size(); i += 2) {
		if (chain.size() % 2 != 0 && i == chain.size() - 1) {
			has_straggler = true;
			straggler = (chain[i]);
			break ;
		}
		if (chain[i].first > chain[i + 1].first) {
			winners.push_back(chain[i]);
			looser[chain[i].second] = chain[i + 1];
		}
		else {
			winners.push_back(chain[i + 1]);
			looser[chain[i + 1].second] = chain[i];
		}
	}
	vecSortRecur(winners);
	vecBinarySort(winners, looser, straggler, has_straggler);
	chain = winners;
}

std::vector<int> PmergeMe::generateJacobsthal(int n) {
	std::vector<int> jacob;
	jacob.push_back(1);
	jacob.push_back(3);
	while (jacob.back() < n) {
		int j = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
		jacob.push_back(j);
	}
	return jacob;
}

void PmergeMe::vecBinarySort(std::vector<std::pair<int, int> > &winners, std::vector<std::pair<int, int> > &loosers, std::pair<int, int> straggler, bool has_straggler) {
	std::vector<std::pair<int, int> > copy_winners = winners;
	int limit = winners.size();
	winners.insert(winners.begin(), loosers[winners[0].second]);
	int added = 1;
	int last_pos = 0;
	std::vector<int> jacob = generateJacobsthal(limit);
	for (size_t i = 0; i < jacob.size(); ++i) {
		int pos = jacob[i];
		if (pos >= limit)
			pos = limit - 1;
		for (int j = pos; j > last_pos; --j)  {
			std::pair<int, int>to_insert = loosers[copy_winners[j].second];
			std::vector<std::pair<int, int> >::iterator it = winners.begin();
			std::vector<std::pair<int, int> >::iterator end = winners.begin() + j + added;
			std::vector<std::pair<int, int> >::iterator pos = std::lower_bound(it, end, to_insert);
			winners.insert(pos, to_insert);
			added++;
		}
		last_pos = pos;
	}
	if (has_straggler) {
		std::vector<std::pair<int, int> >::iterator str = std::lower_bound(winners.begin(), winners.end(), straggler);
		winners.insert(str, straggler);
	}
}

void PmergeMe::deqSort() {
	std::deque<int> to_sort = _deq;
	if (to_sort.size() < 2)
		return ;
	std::deque<std::pair<int, int> > chain;
	for (size_t i = 0; i < to_sort.size(); ++i)
		chain.push_back(std::make_pair(to_sort[i], i));
	deqSortRecur(chain);
	_deq.clear();
	for (size_t i = 0; i < chain.size(); ++i) {
		_deq[i] = chain[i].first;
		std::cout << _deq[i] << std::endl;
	}
}

void PmergeMe::deqSortRecur(std::deque<std::pair<int, int> > &chain) {
	if (chain.size() < 2)
		return ;
	bool has_straggler = false;
	std::pair<int, int> straggler;
	std::deque<std::pair<int, int> >looser(_deq.size());
	std::deque<std::pair<int, int> > winners;
	for(size_t i = 0; i < chain.size(); i += 2) {
		if (chain.size() % 2 != 0 && i == chain.size() - 1) {
			has_straggler = true;
			straggler = (chain[i]);
			break ;
		}
		if (chain[i].first > chain[i + 1].first) {
			winners.push_back(chain[i]);
			looser[chain[i].second] = chain[i + 1];
		}
		else {
			winners.push_back(chain[i + 1]);
			looser[chain[i + 1].second] = chain[i];
		}
	}
	deqSortRecur(winners);
	deqBinarySort(winners, looser, straggler, has_straggler);
	chain = winners;
}

void PmergeMe::deqBinarySort(std::deque<std::pair<int, int> > &winners, std::deque<std::pair<int, int> > &loosers, std::pair<int, int> straggler, bool has_straggler) {
	std::deque<std::pair<int, int> > copy_winners = winners;
	int limit = winners.size();
	winners.insert(winners.begin(), loosers[winners[0].second]);
	int added = 1;
	int last_pos = 0;
	std::vector<int> jacob = generateJacobsthal(limit);
	for (size_t i = 0; i < jacob.size(); ++i) {
		int pos = jacob[i];
		if (pos >= limit)
			pos = limit - 1;
		for (int j = pos; j > last_pos; --j)  {
			std::pair<int, int>to_insert = loosers[copy_winners[j].second];
			std::deque<std::pair<int, int> >::iterator it = winners.begin();
			std::deque<std::pair<int, int> >::iterator end = winners.begin() + j + added;
			std::deque<std::pair<int, int> >::iterator pos = std::lower_bound(it, end, to_insert);
			winners.insert(pos, to_insert);
			added++;
		}
		last_pos = pos;
	}
	if (has_straggler) {
		std::deque<std::pair<int, int> >::iterator str = std::lower_bound(winners.begin(), winners.end(), straggler);
		winners.insert(str, straggler);
	}
}