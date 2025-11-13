/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:33:06 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/04 18:37:18 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
	private :
		std::string _target;
	public :
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& copy);
		void execute(Bureaucrat const & executor) const;
};