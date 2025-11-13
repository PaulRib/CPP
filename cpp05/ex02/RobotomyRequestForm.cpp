/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:32:59 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 14:36:55 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy) : AForm("RobotomyRequestForm", 72, 45), _target(copy._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& copy) {
	if (this != &copy)
		_target = copy._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	(void)executor;
	int random = rand() % 2;
	std::cout << "You heard some drilling noises" << std::endl;
	if (random)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}