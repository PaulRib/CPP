/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:30:44 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 16:47:33 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
}

Intern::Intern(Intern& copy) {
	(void)copy;
}

Intern::~Intern(){
}

Intern& Intern::operator=(Intern& copy) {
	(void)copy;
	return (*this);
}

AForm* Intern::createPDF(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::createRRF(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createSCF(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(std::string name, std::string target) {
	std::string cmp[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int frm = 3;
	for (int i = 0; i < 3; i++) {
		if (name == cmp[i]) {
			frm = i;
			std::cout << "Intern creates " << name << std::endl;
		}
	}
	switch (frm) {
		case 0 :
			return (createPDF(target));
		case 1 :
			return (createRRF(target));
		case 2 :
			return (createSCF(target));
		default :
			std::cout << name;
			throw FormDoesntExistException();
	}
}