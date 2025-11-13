/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:38:15 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/10 11:28:40 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat& copy) : _name(copy._name), _grade(copy._grade){
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& copy) {
	if (this != &copy) {
		_grade = copy._grade;
	}
	return (*this);
}

std::string const& Bureaucrat::getName() const {
	return (_name);
}

int const& Bureaucrat::getGrade() const {
	return (_grade);
}

void Bureaucrat::incrGrade() {
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat& br) {
	os << br.getName() << ", bureaucrat grade " << br.getGrade() << ".";
	return os;
}
