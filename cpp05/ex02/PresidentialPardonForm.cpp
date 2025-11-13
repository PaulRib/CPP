/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:32:54 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 14:37:01 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", 25, 5), _target(copy._target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& copy) {
	if (this != &copy)
		_target = copy._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}