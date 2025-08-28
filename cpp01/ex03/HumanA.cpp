/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:56:01 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/26 18:34:14 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& wp) : _wp(wp), _name(name){
}

void HumanA::attack() {
	std::cout << _name << " attacks with their " << _wp.getType() << std::endl;
}

HumanA::~HumanA(){
}