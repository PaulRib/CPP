/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:54:30 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/20 17:10:48 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	_type = "unknown";
	std::cout << "An WrongAnimal of " << _type << " type is created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	_type = copy._type;
	std::cout << "A copy of an " << _type << " WrongAnimal is created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "An WrongAnimal of " << _type << " type has been destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "An unknown sound of WrongAnimal is heard" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (_type);
}