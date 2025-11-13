/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:38:13 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/10 11:26:15 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	// std::cout << RED << "Test of printing Bureaucrat info then increasing the grade above the limit" << RESET << std::endl;
	// try {
	// 	Bureaucrat br(1, "Boss");
	// 	std::cout << br << std::endl;
	// 	std::cout << RED << "Decreasing the grade" << RESET << std::endl;
	// 	br.decrGrade();
	// 	std::cout << br << std::endl;
	// 	br.incrGrade();
	// 	br.incrGrade();
	// 	std::cout << br << std::endl;
	// }
	// catch (std::exception & e){ 
	// 	std::cerr << "Error: " << e.what() << std::endl;
	// }
	// std::cout << "-------------------------------------------------------------------------------" << std::endl;
	// std::cout << RED << "Test where a Bureaucrat with a too high grade is initialized" << RESET << std::endl;
	// try {
	// 	Bureaucrat br1(0, "Boss");
	// }
	// catch (std::exception & e){ 
	// 	std::cerr << "Error: " << e.what() << std::endl;
	// }
	// std::cout << "-------------------------------------------------------------------------------" << std::endl;
	// std::cout << RED << "Test where a Bureaucrat with a too low grade is initialized" << RESET << std::endl;
	// try {
	// 	Bureaucrat br1(151, "Boss");
	// }
	// catch (std::exception & e){ 
	// 	std::cerr << "Error: " << e.what() << std::endl;
	// }
	Bureaucrat br1(100, "Boss");
	std::cout << br1 << std::endl;
}