/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:38:23 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 13:57:41 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

class AForm;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Bureaucrat {
	private:
		std::string const _name;
		int _grade;
	public:
		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw() {
				return "Bureaucrat: Grade is too high (max 1)";
			}
		};
		class GradeTooLowException : public std::exception {
		public:
        	const char* what() const throw() {
        	    return "Bureaucrat: Grade is too low (min 150)";
        	}
   		};
		Bureaucrat(int grade, std::string name);
		Bureaucrat(Bureaucrat& copy);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat& copy);
		std::string const& getName() const;
		int const& getGrade() const;
		void incrGrade();
		void decrGrade();
		void signForm(AForm &fr);
		void executeForm(AForm const & form) const;
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& br);