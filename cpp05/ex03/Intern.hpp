/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:30:42 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 16:45:01 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern {
	public :
		Intern();
		Intern(Intern& copy);
		~Intern();
		Intern& operator=(Intern& copy);
		AForm* makeForm(std::string name, std::string target);
		AForm* createPDF(std::string target);
		AForm* createRRF(std::string target);
		AForm* createSCF(std::string target);
		class FormDoesntExistException : public std::exception {
		public:
        	const char* what() const throw() {
        	    return " doesn't exist";
        	}
   		};
};