/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:36:27 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 16:05:21 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _energy(10), _damage(0){
	std::cout << "Constructor of ClapTrap " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	*this = copy;
	std::cout << "Copy Constructor of ClapTrap " << _name << " called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor of ClapTrap " << _name << " called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
	if (this != &copy) {
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_damage = copy._damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (_health == 0) {
		std::cout << "ClapTrap " << _name << " is dead, let him rest in peace" << std::endl;
	}
	else if (_energy == 0) {
		std::cout << "ClapTrap " << _name << " is running out of energy and can't attack" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _damage << " points of damage!" << std::endl;
		_energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_health > 0) {
		if (amount > _health)
			_health = 0;
		else
			_health -= amount;
		std::cout << "ClapTrap " << _name << " took " << amount << " damage and now has " << _health << " hp left" << std::endl;
		if (_health == 0) {
			std::cout << "ClapTrap " << _name << " died from the attack" << std::endl;
		}
	}
	else {
		std::cout << "Why do you hit an already dead " << _name << ", what is wrong with you ?" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_health == 0) {
		std::cout << "ClapTrap " << _name << " is dead, let him rest in peace" << std::endl;
	}
	else if (_energy == 0) {
		std::cout << "ClapTrap " << _name << " is running out of energy and can't repair itself" << std::endl;
	}
	else {
		_health += amount;
		std::cout << "ClapTrap " << _name << " has healed " << amount << " hp and is now at " << _health << " hp" << std::endl;
		_energy--;
	}
}