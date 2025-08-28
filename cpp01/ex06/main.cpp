/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:02:07 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/28 18:22:05 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl cp;
	if (argc != 2) {
		std::cout << "Usage : ./Harl complainlevel" << std::endl;
		return(1);
	}
	cp.complain(argv[1]);
}

// int main() {
// 	Harl cp;

// 	std::cout << "Envoie de 'DEBUG' :" << std::endl;
// 	cp.complain("DEBUG");
// 	std::cout << "Envoie de 'INFO' :" << std::endl;
// 	cp.complain("INFO");
// 	std::cout << "Envoie de 'WARNING' :" << std::endl;
// 	cp.complain("WARNING");
// 	std::cout << "Envoie de 'ERROR' :" << std::endl;
// 	cp.complain("ERROR");
//  std::cout << "Envoie de 'TEST' :" << std::endl;
//	cp.complain("TEST");
// }
