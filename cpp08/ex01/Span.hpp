/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:03:48 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/25 14:34:37 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <climits>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class NoPlaceException : public std::exception {
	const char* what() const throw() {
		return ("No more place left in the container");
	}
};

class NotEnoughNumberException : public std::exception {
	const char* what() const throw() {
		return ("There is not enough numbers stored");
	}
};

class Span {
	private :
		std::vector<int> _vec;
		unsigned int _N;
	public :
		Span(unsigned int N);
		Span(const Span& copy);
		~Span();
		Span& operator=(const Span& copy);
		int shortestSpan();
		int longestSpan();
		void addNumber(int i);
		void addNumberRange(std::vector<int>::iterator first, std::vector<int>::iterator last);
};