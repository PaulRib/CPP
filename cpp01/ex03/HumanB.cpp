/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:55:56 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/27 18:20:11 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _wp(NULL) {
	_name = name;
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& wp) {
	_wp = &wp;
}

void HumanB::attack() {
	if (_wp)
		std::cout << _name << " attacks with their " <<  _wp->getType() << std::endl;
	else
		std::cout << _name << "is unarmed" << std::endl;
}
