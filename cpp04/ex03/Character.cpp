/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:44:23 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/11 16:40:17 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_stuff[i] = NULL;
	for (int i = 0; i < 9999; i++)
		_trash[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& copy) {
	*this = copy;
//	std::cout << "Copy character constructor called" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (_stuff[i])
			delete _stuff[i];
	}
	for (int i = 0; i < 9999; i++) {
		if (_trash[i])
			delete _trash[i];
	}
//	std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(const Character& copy) {
	if (this != &copy)
		_name = copy._name;
	return (*this);
}

std::string const& Character::getName() const{
	return (_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_stuff[i]) {
			_stuff[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (_stuff[idx]) {
		for(int i = 0; i < 9999; i++)
			if (!_trash[i]) {
				_trash[i] = _stuff[idx];
				break;
			}
		_stuff[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (_stuff[idx])
		_stuff[idx]->use(target);
}
