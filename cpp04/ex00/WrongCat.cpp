/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:21 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/21 17:50:13 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "One " << _type << " has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	_type = copy._type;
	std::cout << "A copy" << _type << " appeared" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "The " << _type << " has been destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow" << std::endl;
}