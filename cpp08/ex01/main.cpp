/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:03:44 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/25 14:38:22 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	srand(time(NULL));
	Span sp(20000);
	Span sp2(0);
	Span sp3(5);
	std::vector<int> test;
	std::cout << RED << "Test of putting 20001 numbers in a 20000place vector" << RESET << std::endl;
	for (int i = 0; i < 20001; i++) {
		const int value = rand();
		test.push_back(value);
	}
	try {
			sp.addNumberRange(test.begin(), test.end());
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	sp.addNumberRange(test.begin(), test.end() - 1);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << RED << "Test of getting span with only one number in container" << RESET << std::endl;
	try {
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << RED << "Test with the same output as the subject" << RESET << std::endl;
	sp3.addNumber(6);
	sp3.addNumber(3);
	sp3.addNumber(17);
	sp3.addNumber(9);
	sp3.addNumber(11);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}