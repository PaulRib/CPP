/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:22:02 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/13 18:05:17 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	RPN r;
	if (argc != 2) {
		std::cout << "Usage : ./RPN operation" << std::endl;
		return(1);
	}
	if (argv[1][0] == '\0') {
		std::cout << "Error" << std::endl;
		return (1);
	}
	try {
		r.parser(argv[1]);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}