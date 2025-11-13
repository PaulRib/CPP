/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:33:04 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 14:36:40 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137), _target(copy._target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& copy) {
	if (this != &copy)
		_target = copy._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	std::string outfile = _target + "_shrubbery";
	std::ofstream ofs(outfile.c_str());
	ofs << "       _-_       "<< std::endl;
   	ofs << "    /~~   ~~\\    " << std::endl;
	ofs << "  /~~       ~~\\ " << std::endl;
	ofs << " {             } " << std::endl;
	ofs << " \\  _-     -_  / " << std::endl;
 	ofs << "    ~ \\\\ //  ~ "<< std::endl;
	ofs << " _- -  | | _- _ "<< std::endl;
  	ofs << "   _ - | |   -_ " << std::endl;
    ofs << "  	  // \\\\      " << std::endl;
}
