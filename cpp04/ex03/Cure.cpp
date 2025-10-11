/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:09:38 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/11 16:40:34 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
//	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria("cure") {
	*this = copy;
//	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
//	std::cout << "Destructor of Cure called" << std::endl;
}

Cure& Cure::operator=(const Cure& copy) {
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

AMateria* Cure::clone() const{
	AMateria* tmp = new Cure;
	return (tmp);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}