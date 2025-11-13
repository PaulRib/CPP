/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:32:57 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/04 18:37:12 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
	private :
		std::string _target;
	public :
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm& copy);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm& copy);
		void execute(Bureaucrat const & executor) const;
};