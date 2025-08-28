/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:52:32 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/26 15:51:02 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() {
	_count = 0;
}

PhoneBook::~PhoneBook() {}

std::string formatting(std::string tmp) {
	if (tmp.length() > 10) {
		tmp = tmp.substr(0, 9);
		tmp = tmp.append(".");
	}
	return (tmp);
}

void PhoneBook::display_contact (int i) {

	if (i > 8 || i > this->_count) {
		std::cout << "Index is too high" << std::endl;
		return ;
	}
	if (i < 1) {
		std::cout << "Index is too low" << std::endl;
		return ;
	}
	std::cout << "First Name : " << _contact[i - 1].getFirstName() << std::endl;
	std::cout << "Last Name : " << _contact[i - 1].getLastName() << std::endl;
	std::cout << "Nickname : " << _contact[i - 1].getNickname() << std::endl;
	std::cout << "Phone Number : " << _contact[i - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << _contact[i - 1].getDarkestSecret() << std::endl;
}

void PhoneBook::who_is() {
	int	index;
	std::string	input;
	std::stringstream tmp;
	if (this->_count > 0) {
		std::cout << "Insert an index : ";
		if (!std::getline(std::cin, input))
			return ;
		tmp << input;
		tmp >> index;
		PhoneBook::display_contact(index);
	}
}

void PhoneBook::searchContact() {
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name"
	<< "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" 
	<< "|" << std::endl;

	for (int i = 0; i < this->_count; i++) {
		std::cout << std::setw(10) << i + 1 << "|";
		std::string first = formatting(_contact[i].getFirstName());
		std::cout << std::setw(10) << first << "|";
		std::string last = formatting(_contact[i].getLastName());
		std::cout << std::setw(10) << last << "|";
		std::string nick = formatting(_contact[i].getNickname());
		std::cout << std::setw(10) << nick << "|" << std::endl;
		if (i == 7)
			break ;
	}
	PhoneBook::who_is();
}

int isValid(std::string number) {
	for (int i = 0; number[i]; i++) {
		if (!isdigit(number[i]))
			return (0);
	}
	return (1);
}

std::string getValue(const std::string tmp, int type) {
	std::string input;

	do {
		std::cout << tmp;
		if (!std::getline(std::cin, input))
			return ("ahah so clever ^^");
		if (input.empty())
			std::cout << "This field cannot be empty" << std::endl;
		else if (type == 1) {
			if (isValid(input))
				type = 0;
			else
				std::cout << "Phone number must only contain numbers" << std::endl;
		}
	} while (input.empty() || type == 1);
	return (input);
}

void PhoneBook::addContact() {
	Contact	tmp;
	int		i;

	tmp.setFirstName(getValue("Enter First Name : ", 0));
	tmp.setLastName(getValue("Enter Last Name : ", 0));
	tmp.setNickname(getValue("Enter Nickname : ", 0));
	tmp.setPhoneNumber(getValue("Enter Phone Number : ", 1));
	tmp.setDarkestSecret(getValue("Enter Darkest Secret : ", 0));

	i = this->_count % 8;
	this->_contact[i] = tmp;
	this->_count++;
}
