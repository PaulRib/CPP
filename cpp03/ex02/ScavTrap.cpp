/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:27:49 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 11:56:52 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap("Clap") {
	_name = name;
	_health = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "Constructor of ScavTrap " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap("Clap"){
	*this = copy;
	std::cout << "Copy Constructor of ScavTrap " << _name << " called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap " << _name << " called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
	if (this != &copy) {
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_damage = copy._damage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target) {\
	if (_energy > 0 && _health > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _damage << " points of damage!" << std::endl;
		_energy--; }
	else if (_health == 0) {
		std::cout << "ScavTrap " << _name << " is dead, let him rest in peace" << std::endl;
	}
	else if (_energy == 0) {
		std::cout << "ScavTrap " << _name << " is running out of energy and can't attack" << std::endl;
	}
}

void ScavTrap::guardGate() {
	if (_health == 0)
		std::cout << "ScavTrap " << _name << " is dead and can't keep the gate" << std::endl;
	else if (_energy == 0)
		std::cout << "ScavTrap " << _name << " is running out of energy and can't guard the gate" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}