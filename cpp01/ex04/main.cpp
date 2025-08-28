/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:55:41 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/28 17:54:13 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::string& input, std::string s1, std::string s2) {
	std::size_t found = input.find(s1);

	do {
		input.erase(found, s1.size());
		input.insert(found, s2);
		found = input.find(s1);
	} while (found != std::string::npos);
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage : ./sed <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::ifstream	ifs(argv[1]);
	std::string		input;
	std::string 	outfile = argv[1];
	if (!ifs) {
		std::cerr << "Impossible d'ouvrir le fichier " << argv[1] << std::endl;
		return (1);
	}
	outfile += ".replace";
	std::ofstream ofs(outfile.c_str());
	while (std::getline(ifs, input)) {
		bool eof = ifs.peek() == EOF;
		if (input.find(argv[2]) != std::string::npos)
			replace(input, argv[2], argv[3]);
		ofs << input;
		if (!eof)
			ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
}