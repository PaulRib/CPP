/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:38:13 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 17:06:11 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main() {
	std::cout << RED << "Creating a ShrubberyCreationForm and executing" << RESET << std::endl;
	try {
		Intern it;
		Bureaucrat boss(137, "Chef");
		AForm* af = it.makeForm("ShrubberyCreationForm", "home");
		boss.signForm(*af);
		boss.executeForm(*af);
		delete af;
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
		std::cout << RED << "Creating a RobotomyRequestForm and executing" << RESET << std::endl;
	try {
		Intern it;
		Bureaucrat boss(45, "Chef");
		AForm* af = it.makeForm("RobotomyRequestForm", "You");
		boss.signForm(*af);
		boss.executeForm(*af);
		delete af;
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
		std::cout << RED << "Creating a PresidentialPardonForm and executing" << RESET << std::endl;
	try {
		Intern it;
		Bureaucrat boss(1, "Chef");
		AForm* af = it.makeForm("PresidentialPardonForm", "Me");
		boss.signForm(*af);
		boss.executeForm(*af);
		delete af;
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
		std::cout << RED << "Trying to create an unknown form" << RESET << std::endl;
	try {
		Intern it;
		Bureaucrat boss(137, "Chef");
		AForm* af = it.makeForm("PresidentialPardonForm", "Me");
		boss.signForm(*af);
		boss.executeForm(*af);
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
}