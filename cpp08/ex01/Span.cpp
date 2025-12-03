/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:03:46 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/25 14:34:34 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _vec(), _N(N) {
	_vec.reserve(N);
}

Span::~Span() {}

Span::Span(const Span& copy) : _vec(copy._vec), _N(copy._N){
	_vec.reserve(_N);
}

Span& Span::operator=(const Span& copy) {
	if (this != &copy) {
	_N = copy._N;
	_vec = copy._vec;
	_vec.reserve(_N);
	}
	return (*this);
}

void Span::addNumber(int i) {
	if (_vec.size() == _N)
		throw NoPlaceException();
	_vec.push_back(i);
}

int Span::shortestSpan() {
	long int span =  LONG_MAX;
	if (_vec.size() < 2)
		throw NotEnoughNumberException();
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	for (unsigned int i = 1; i < tmp.size(); ++i) {
		if (span > tmp[i] - tmp[i - 1])
			span = tmp[i] - tmp[i - 1];
	}
	return (span);
}

void Span::addNumberRange(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	int total = last - first;
	if (_vec.size() + total > _N)
		throw NoPlaceException();
	_vec.insert(_vec.end(), first, last);
}

int Span::longestSpan() {
	if (_vec.size() < 2)
		throw NotEnoughNumberException();
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}