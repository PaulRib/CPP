/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:41:53 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/13 18:18:21 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
	
BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) : _account(copy._account){}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy) {
	if (this != &copy) {
		_account = copy._account;
	}
	return (*this);
}

static bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int BitcoinExchange::checkDate(std::string date) {
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	std::string year = date.substr(0, 4);
	int y = std::atoi(date.c_str());
	int m = std::atoi(month.c_str());
	int d = std::atoi(day.c_str());
	if (m > 12 || d > 31)
		return (1);
	if (m == 4 || m == 6 || m == 9 || m == 11)
		if (d > 30)
			return (1);
	if (m == 2) {
		if (isLeapYear(y)) {
			if (d > 29)
				return (1);
		}
		else {
			if (d > 28)
				return (1);
		}
	}
	if (y < 2009)
		return (1);
	return (0);
}

void BitcoinExchange::checkRate(std::string date, float value, std::string content) {
	std::map<std::string, float>::iterator it = _account.begin();
	for (; it != _account.end(); ++it) {
		if (it->first == date) {
			std::cout << date << " => " << value << " = " << value * it->second << std::endl;
			return ;
		}
	}
	std::map<std::string, float>::reverse_iterator rit = _account.rbegin();
	for (; rit != _account.rend(); ++rit) {
		if (date.compare(rit->first) > 0) {
			std::cout << date << " => " << value << " = " << value * rit->second << std::endl;
			return ;
		}
	}
	std::cout << "Error: bad input => " << content << std::endl;
}

int BitcoinExchange::verifyValue(std::string value) {
	size_t i = 1;
	int dot = 0;
	if (value[i] == ' ')
		i++;
	for (; i < value.length(); ++i) {
		if (!isdigit(value[i]) || value[i] == '-') {
			switch (value[i]) {
				case '.':
					dot++;
					break;
				case 'f':
					if (i != value.length() - 1 || dot == 0)
						return (1);
					break;
				case 'F':
					if (i != value.length() - 1 || dot == 0)
						return (1);
					break;
				default:
					return (1);
			}
		}
	}
	if (dot > 1)
		return (1);
	return (0);
}

void BitcoinExchange::verifyLine(std::string content) {
	if (content.length() < 14) {
		std::cout << "Error: bad input => " << content << std::endl;
		return ; 
	}
	size_t in = content.find('|');
	if (in == std::string::npos) {
		std::cout << "Error: bad input => " << content << std::endl;
		return ;
	}
	std::string date = content.substr(0, in);
	if (date[date.length() - 1] == ' ')
		date.erase(date.length() - 1);
	if (date.length() < 10 || date[4] != '-' || date[7] != '-' || checkDate(date) == 1) {
		std::cout << "Error: bad input => " << content << std::endl;
		return ;
	}
	for (size_t i = 0; i < date.length(); ++i) {
		if (i == 4 || i == 7)
			continue ;
		if (!isdigit(date[i])) {
		std::cout << "Error: bad input => " << content << std::endl;
		return ;
		}
	}
	std::string value = content.substr(in + 1);
	if (verifyValue(value) == 1) {
		std::cout << "Error: bad input => " << content << std::endl;
		return ;
	}
	float val = std::strtof(value.c_str(), NULL);
	if (val < 0.0f) {
		std::cout << "Error: not a positive number." << std::endl;
		return ;
	}
	if (val > 1000.0f) {
		std::cout << "Error: too large a number." << std::endl;
		return ;
	}
	checkRate(date, val, content);
}

void BitcoinExchange::getDatabase() {
	std::ifstream ifs("data.csv");
	std::string result;

	while (std::getline(ifs, result)) {
		size_t i = result.find(',');
		if (i == std::string::npos)
			continue;
		std::string date = result.substr(0, i);
		std::string val = result.substr(i + 1);
		float value = std::strtof(val.c_str(), NULL);
		_account.insert(std::pair<std::string, float>(date, value));
	}
}
