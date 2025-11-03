/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:42:45 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/20 17:48:53 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _b(new Brain) {
	_type = "Cat";
	std::cout << "One " << _type << " has been created" << std::endl;
}

Cat::Cat(const Cat& copy) : _b(new Brain) {
	_type = copy._type;
	*_b = *copy._b;
	std::cout << "A copy" << _type << " appeared" << std::endl;
}

Cat::~Cat() {
	std::cout << "The " << _type << " has been destroyed" << std::endl;
	delete _b;
}

Cat& Cat::operator=(const Cat& copy) {
	if (this != &copy) {
		_type = copy._type;
		if (_b)
			delete _b;
		if (copy._b)
			_b = new Brain(*copy._b);
		else
			_b = new Brain();
	}
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}