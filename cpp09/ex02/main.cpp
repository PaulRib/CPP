/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:39:49 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/18 14:00:07 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Usage : ./PmergeMe + number list" << std::endl;
		return (1);
	}
	PmergeMe pm;
	int i = 1;
	long int nb;
	char *ptr;
	while (argv[i]) {
		std::string arg = argv[i];
		if (arg.empty()) {
			std::cout << "Error: empty argument" << std::endl;
			return (1);
		}
		nb = std::strtol(argv[i], &ptr, 10);
		if (*ptr != '\0') {
			std::cout << "Error: Bad input" << std::endl;
			return (1);
		}
		if (nb < 0) {
			std::cout << "Error: Please enter only positive integers" << std::endl;
			return (1);
		}
		if (nb > INT_MAX) {
			std::cout << "Error: Please do not enter number superior to max integer" << std::endl;
			return (1);
		}
		if (pm.addNumber(nb)) {
			std::cout << "Error: Please do not enter duplicate integer" << std::endl;
			return (1);
		}
		i++;
	}
	std::cout << "Before: ";
	pm.printVec();
	std::clock_t start_v = std::clock();
	pm.vecSort();
	std::clock_t end_v = std::clock();
	double time_v = static_cast<double>(end_v - start_v) / CLOCKS_PER_SEC * 1000000;

   	std::clock_t start_d = std::clock();
	pm.deqSort();
	std::clock_t end_d = std::clock();
	double time_d = static_cast<double>(end_d - start_d) / CLOCKS_PER_SEC * 1000000;

	std::cout << "After:  ";
	pm.printDeq();
    std::cout << "Time to process a range of " << (i - 1) << " elements with std::vector : " 
              << time_v << " us" << std::endl;
    std::cout << "Time to process a range of " << (i - 1) << " elements with std::deque : " 
              << time_d << " us" << std::endl;

    return 0;
}