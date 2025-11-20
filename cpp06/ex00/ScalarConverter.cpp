/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:29:09 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/18 13:11:45 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter(){
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy){
	(void)copy;
	return (*this);
}

int isValid(std::string input)
{
	int f = 0;
	int dot = 0;
	int sign = 0;

	if (input.empty())
		return (0);
	for(size_t i = 0; i < input.size(); i++)
	{
		if(input.size() != 1)
		{
			if(input == "-inff" || input == "+inff" || input == "nanf")
				return(2);
			else if(input == "-inf" || input == "+inf" || input == "nan")
				return(2);
			else if(!((std::isdigit(input[i])) || input[i] == 'F' || input[i] == 'f' || input[i] == '.' || input[i] == '+' || input[i] == '-'))
				return (0);
			if(input[i] == 'f' || input[i] == 'F')
			{
				if(i == input.size() - 1)
					f++;
				else 
					return(0);
			}
			if(input[i] == '.')
				dot++;
			if(input[i] == '+' || input[i] == '-') 
			{
				if (i == 0)
					sign++;
				else
					return (0);
			}
		}
	}
	if(f > 1 || dot > 1 || sign > 1)
		return(0);
	if (f > 0 && dot < 1)
		return(0);
	return(1);
}

void ScalarConverter::convert(std::string input){
	
	if(!isValid(input))
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		return ;
	}
	else if(isValid(input) == 2)
	{
		displaySpecial(input);
		return ;
	}
	else if(findFormat(input))
		return ;	
	std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
}

bool findFormat(std::string input)
{
	size_t last = input.size() - 1;
	
	if(input.length() == 1)
	{
		if(input[0] >= '0' && input[0] <= '9')
			displayInt(input);
		else
			displayChar(input);
	}
	else if(input[last] == 'f' || input[last] == 'F')
	{
		if(isValidDot(input))
			displayFloat(input);
	}
	else if(input.find('.') != std::string::npos && isValidDot(input))
		displayDouble(input);
	else if(isValidInt(input))
		displayInt(input);
	else
		return(0);
	return(1);
}

/* isValid */

int isValidDot(std::string input)
{
	size_t last = input.size() - 1;
	
	if(input[0] == '.' || input[last] == '.')
		return(0);
	else if(input.find('.'))
		return(1);
	return(0);
}

int isValidInt(std::string input)
{
	for(size_t i = 0; i < input.size(); i++)
	{
		if(!(input[i] >= '0' && input[i] <= '9') && (input[i] != '-' && input[i] != '+'))
			return(0);
	}
	return(1);
}
