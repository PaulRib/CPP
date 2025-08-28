/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:52:30 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/28 18:28:23 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() {
	return (_first_name);
}

std::string Contact::getLastName() {
	return (_last_name);
}

std::string Contact::getNickname() {
	return (_nickname);
}

std::string Contact::getPhoneNumber() {
	return (_phone_number);
}

std::string Contact::getDarkestSecret() {
	return (_darkest_secret);
}

void Contact::setFirstName(const std::string &tmp) {
	_first_name = tmp;
}

void Contact::setLastName(const std::string &tmp) {
	_last_name = tmp;
}

void Contact::setNickname(const std::string &tmp) {
	_nickname = tmp;
}

void Contact::setPhoneNumber(const std::string &tmp) {
	_phone_number = tmp;
}

void Contact::setDarkestSecret(const std::string &tmp) {
	_darkest_secret = tmp;
}
