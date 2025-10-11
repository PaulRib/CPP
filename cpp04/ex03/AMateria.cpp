/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:00:37 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/11 16:40:20 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type) {
//	std::cout << "Constructor of AMateria called" << std::endl;	
}

AMateria::AMateria(const AMateria& copy) {
	*this = copy;
//	std::cout << "Copy constructor of AMateria called" << std::endl;
}

AMateria::~AMateria() {
//	std::cout << "Destructor of AMateria called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copy) {
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

std::string const& AMateria::getType() const {
	return (_type);
}
