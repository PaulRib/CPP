/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:41:51 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/05 15:29:29 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	BitcoinExchange bt;

	(void)argv;
	if (argc != 2) {
		std::cout << "Usage : ./btc <filename>" << std::endl;
		return (1);
	}
	std::ifstream ifs(argv[1]);
	std::string content;
	if (!ifs) {
		std::cerr << "Error: could not open file" << std::endl;
		return (1);
	}
	bt.getDatabase();
	while (getline(ifs, content)) {
		bt.verifyLine(content);
	}
}