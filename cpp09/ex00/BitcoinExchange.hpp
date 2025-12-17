/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:41:47 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/09 14:26:31 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <map>
#include <fstream>
#include <string>
#include <cstring>

class BitcoinExchange {
	private:
		std::map <std::string, float>_account;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& copy);
		void verifyLine(std::string content);
		void getDatabase();
		void checkRate(std::string date, float value, std::string content);
		int checkDate(std::string date);
		int verifyValue(std::string value);
};