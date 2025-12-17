/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:39:49 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/17 18:57:54 by pribolzi         ###   ########.fr       */
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
		nb = std::strtol(argv[i], &ptr, 10);
		if (*ptr != '\0') {
			std::cout << "Bad input" << std::endl;
			return (1);
		}
		if (nb < 0) {
			std::cout << "Please enter only positive integers" << std::endl;
			return (1);
		}
		if (nb > INT_MAX) {
			std::cout << "Please do not enter number superior to max integer" << std::endl;
			return (1);
		}
		if (pm.addNumber(nb)) {
			std::cout << "Please do not enter duplicate integer" << std::endl;
			return (1);
		}
		i++;
	}
	std::cout << "Resultat du sort via std::vector : " << std::endl;
	pm.vecSort();
	std::cout << "Resultat du sort via std::deque : " << std::endl;
	pm.deqSort();
}