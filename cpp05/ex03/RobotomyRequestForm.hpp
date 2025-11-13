/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:33:02 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/05 13:04:27 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
	private :
		std::string _target;
	public :
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm& copy);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm& copy);
		void execute(Bureaucrat const & executor) const;
};