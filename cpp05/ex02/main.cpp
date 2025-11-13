/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:38:13 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 14:16:08 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	std::srand(std::time(0));
	std::cout << RED << "Test of SCF into decreasing the grade under the requirement needed to execute it" << RESET << std::endl;
	try {
		Bureaucrat br(137, "Chef");
		ShrubberyCreationForm sr("home");
		std::cout << br << std::endl;
		br.signForm(sr);
		br.executeForm(sr);
		br.decrGrade();
		br.executeForm(sr);
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << RED << "Test of PDF without the requirement to sign it" << RESET << std::endl;
	try {
		Bureaucrat br(26, "Chef");
		PresidentialPardonForm pf("home");
		std::cout << br << std::endl;
		br.signForm(pf);
		br.executeForm(pf);
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << RED << "Test of PDF which work" << RESET << std::endl;
	try {
		Bureaucrat br(5, "Chef");
		PresidentialPardonForm pf("Me");
		std::cout << br << std::endl;
		br.signForm(pf);
		br.executeForm(pf);
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << RED << "Test of PDF without signing it" << RESET << std::endl;
	try {
		Bureaucrat br(20, "Chef");
		PresidentialPardonForm pf("home");
		std::cout << br << std::endl;
		br.executeForm(pf);
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << RED << "5 tests of RRF to maximise chance to have both situation" << RESET << std::endl;
	try {
		Bureaucrat br(40, "Chef");
		RobotomyRequestForm rf("You");
		std::cout << br << std::endl;
		br.signForm(rf);
		for (int i = 0; i < 5; i++)
			br.executeForm(rf);
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
}