/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:38:13 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 14:10:58 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	std::cout << RED << "Test where i initialize a form with a grade needed below 1" << RESET << std::endl;
	try {
		Bureaucrat br(1, "Boss");
		std::cout << br << std::endl;
		Form fr("Form 0", 0, 0);
	}
	catch (std::exception & e ){ 
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << RED << "Test of printing Bureaucrat and Form info then a success signing" << RESET << std::endl;
	try {
		Bureaucrat br(1, "Chef");
		Form	fr("Form 1", 100, 1);
		std::cout << br << std::endl;
		std::cout << fr << std::endl;
		br.signForm(fr);
		std::cout << fr << std::endl;
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << RED << "Test of a failed sign because Bureaucrat grade is too low" << RESET << std::endl;
	try {
		Bureaucrat br(101, "Chef");
		Form	fr("Form 2", 100, 1);
		std::cout << br << std::endl;
		std::cout << fr << std::endl;
		br.signForm(fr);
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
}