/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:07:11 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 13:21:27 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	_name = name;
	ClapTrap::_name += "_clap_name";
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;
	std::cout << "Constructor of DiamondTrap " << _name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy._name + "_clap_name"), ScavTrap("scav"), FragTrap("frag") {
	std::cout << "Copy constructor of DiamondTrap " << _name << " called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor of DiamondTrap " << _name << " called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy) {
	if (this != &copy) {
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_damage = copy._damage;
	}
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}