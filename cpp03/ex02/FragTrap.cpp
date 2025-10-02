/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:52:12 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 11:58:34 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap("Clap") {
	_name = name;
	_health = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "Constructor of FragTrap " << _name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap("Clap") {
	*this = copy;
	std::cout << "Copy constructor of FragTrap " << _name << "called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTrap " << _name << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
	if (this != &copy) {
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_damage = copy._damage;
	}
	return (*this);
}

void FragTrap::highFivesGuys() {
	if (_health == 0)
		std::cout << "FragTrap " << _name << " is dead and can't complete the high fives" << std::endl;
	else if (_energy == 0)
		std::cout << "ScavTrap " << _name << " is running out of energy and can't high fives" << std::endl;
	else
		std::cout << "FragTrap " << _name << " accept your request of high fives" << std::endl;
}