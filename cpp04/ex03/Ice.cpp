/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:09:46 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/11 16:40:26 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
//	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria("ice"){
	*this = copy;
//	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
//	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& copy) {
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

AMateria* Ice::clone() const{
	AMateria* tmp = new Ice;
	return (tmp);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}