/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:29:11 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/13 16:45:39 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <climits>
#include <cfloat>
#include <cstdlib>
#include <iomanip>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class ScalarConverter {
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& copy);
	public :
		static void convert(std::string input);
};

void displaySpecial(std::string input);
void displayDouble(std::string input);
void displayFloat(std::string input);
void displayInt(std::string input);
void displayChar(std::string input);
int isValidInt(std::string literal);
int isValidDot(std::string literal);
bool findFormat(std::string literal);
int isValid(std::string literal);