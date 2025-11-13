/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:58:20 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/04 16:06:49 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, const int sign, const int exec) : _name(name), _signed(false), _signGr(sign), _execGr(exec) {
	if (_signGr < 1 || _execGr < 1)
		throw GradeTooHighException();
	if (_signGr > 150 || _execGr > 150)
		throw GradeTooLowException();
}

Form::Form(Form& copy) : _name(copy._name), _signed(false), _signGr(copy._signGr), _execGr(copy._execGr) {
}

Form::~Form() {
}

Form& Form::operator=(Form &copy) {
	if (this != &copy) {
		_signed = copy._signed;
	}
	return (*this);
}

std::string const& Form::getName() const {
	return (_name);
}

int const& Form::getSignGrade() const {
	return (_signGr);
}

bool const& Form::getSign() const {
	return (_signed);
}

int const& Form::getExecGrade() const {
	return (_execGr);
}

void Form::beSigned(Bureaucrat br) {
	if (br.getGrade() > _signGr) {
		std::cerr << br.getName() << " couldn't sign " << _name << " because ";
		throw GradeTooLowException();
	}
	if (_signed == false)
		_signed = true;
	else
		std::cout << "Form is already signed" << std::endl;
}

std::ostream &operator<<(std::ostream& os, const Form& fr) {
	os << "Form name : " << fr.getName() << " | Signed : " << fr.getSign() <<
	" | Grade required to be signed : " << fr.getSignGrade() << " | Grade required to execute : " << fr.getExecGrade();
	return os;
}