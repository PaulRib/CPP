/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:58:22 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 14:14:11 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class AForm {
	private:
		const std::string _name;
		bool _signed;
		const int _signGr;
		const int _execGr;
	public:
		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw() {
				return "Form : Grade is too high (max 1)";
			}
		};
		class GradeTooLowException : public std::exception {
		public:
        	const char* what() const throw() {
        	    return "Grade is too low";
        	}
   		};
		class FormNotSignedException : public std::exception {
		public:
			const char* what() const throw() {
				return " is not signed";
			}
		};
		class CantExecuteException : public std::exception {
		public:
        	const char* what() const throw() {
        	    return "Grade is too low to execute the form";
        	}
   		};
		class CantSignException : public std::exception {
		public:
        	const char* what() const throw() {
        	    return "his grade is too low to sign the form";
        	}
   		};
		AForm(std::string const name, const int sign, const int exec);
		virtual ~AForm();
		void beSigned(Bureaucrat br);
		std::string const& getName() const;
		int const& getExecGrade() const;
		int const& getSignGrade() const;
		bool const& getSign() const;
		virtual void execute(Bureaucrat const & executor) const = 0;
		void verifyexecution(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& os,const AForm& fm);