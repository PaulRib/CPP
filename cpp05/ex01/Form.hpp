/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:58:22 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/04 16:03:36 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form {
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
		Form(std::string const name, const int sign, const int exec);
		Form(Form& copy);
		~Form();
		Form& operator=(Form& copy);
		void beSigned(Bureaucrat br);
		std::string const& getName() const;
		int const& getExecGrade() const;
		int const& getSignGrade() const;
		bool const& getSign() const;
};

std::ostream& operator<<(std::ostream& os,const Form& fm);