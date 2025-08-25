/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:53:13 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/25 14:19:45 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main() {
	PhoneBook	pb;
	std::string	str;

	while (1) {
		std::cout << "> ";
		if (!std::getline(std::cin, str)) {
			std::cout << "Stop using CTRL + D please" << std::endl;
			return (1);
		}
		if (str == "EXIT")
			return (0);
		else if (str == "ADD")
			pb.addContact();
		else if (str == "SEARCH")
			pb.searchContact();
		else
			std::cout << "Please write EXIT, ADD or SEARCH" << std::endl; 
	}
}
