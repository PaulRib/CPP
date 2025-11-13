/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:58:20 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 14:14:25 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, const int sign, const int exec) : _name(name), _signed(false), _signGr(sign), _execGr(exec) {
	if (_signGr < 1 || _execGr < 1)
		throw GradeTooHighException();
	if (_signGr > 150 || _execGr > 150)
		throw GradeTooLowException();
}

AForm::~AForm() {
}

std::string const& AForm::getName() const {
	return (_name);
}

int const& AForm::getSignGrade() const {
	return (_signGr);
}

bool const& AForm::getSign() const {
	return (_signed);
}

int const& AForm::getExecGrade() const {
	return (_execGr);
}

void AForm::beSigned(Bureaucrat br) {
	if (br.getGrade() > _signGr) {
		std::cerr << br.getName() << " couldn't sign " << getName() << " because ";
		throw CantSignException();
	}
	if (_signed == false)
		_signed = true;
	else
		std::cout << "Form is already signed" << std::endl;
}

std::ostream &operator<<(std::ostream& os, const AForm& fr) {
	os << "Form name : " << fr.getName() << " | Signed : " << fr.getSign() <<
	" | Grade required to be signed : " << fr.getSignGrade() << " | Grade required to execute : " << fr.getExecGrade();
	return os;
}

void AForm::verifyexecution(Bureaucrat const & executor) const {
	if (_signed == false) {
		std::cerr << _name;
		throw FormNotSignedException();
	}
	if (executor.getGrade() > _execGr)
		throw CantExecuteException();
	execute(executor);
}