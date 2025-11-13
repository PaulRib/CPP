/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:53:22 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/13 15:38:55 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void displayChar(std::string input) {
	char c = input[0];

	if (c <= 32 || c >= 127)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;

	std::cout << "int: " << static_cast<int>(c) << std::endl;

	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;

	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void displayInt(std::string input) {
	long int i = std::strtol(input.c_str(), NULL, 10);
	char c;

	c = static_cast<char>(i);
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (c <= 32 || c == 127)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;

	if (i > (long)INT_MAX || i < (long)INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;

	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void displayFloat(std::string input) {
	float f = std::strtof(input.c_str(), NULL);
	char c;

	c = static_cast<char>(f);
	if (f < 0 || f > 127)
		std::cout << "char: impossible" << std::endl;
	else if (c <= 32 || c == 127)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if (f > (float)INT_MAX || f < (float)INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	std::cout << std::showpoint << "float: " << f << "f" << std::noshowpoint << std::endl;

	std::cout << std::showpoint << "double: " << static_cast<double>(f) << std::noshowpoint << std::endl;
}

void displayDouble(std::string input) {
	double d = std::strtod(input.c_str(), NULL);
	char c;

	c = static_cast<char>(d);
	if (d < 0 || d > 127)
		std::cout << "char: impossible" << std::endl;
	else if (c <= 32 || c == 127)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if (d > (double)FLT_MAX || d < (double)FLT_MIN)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << std::showpoint << "float: " << static_cast<float>(d) << "f" << std::noshowpoint << std::endl;

	std::cout << std::showpoint << "double: " << d << std::noshowpoint << std::endl;
}

void displaySpecial(std::string input) {
	if (input == "nan" || input == "nanf")
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	else if (input == "-inf" || input == "-inff")
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	else
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
}