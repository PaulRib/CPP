/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:39:33 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/18 13:43:40 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <climits>
#include <algorithm>
#include <ctime>
#include <iomanip>

class PmergeMe {
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& copy);
		int addNumber(int nb);
		void printVec();
		void printDeq();
		void vecSortRecur(std::vector<std::pair<int, int> > &chain);
		void vecSort();
		void vecBinarySort(std::vector<std::pair<int, int> > &winners, std::vector<std::pair<int, int> > &loosers, std::pair<int, int> straggler, bool has_straggler);
		std::vector<int> generateJacobsthal(int n);
		void deqSortRecur(std::deque<std::pair<int, int> > &chain);
		void deqSort();
		void deqBinarySort(std::deque<std::pair<int, int> > &winners, std::deque<std::pair<int, int> > &loosers, std::pair<int, int> straggler, bool has_straggler);
};