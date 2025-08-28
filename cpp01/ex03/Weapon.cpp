/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:56:08 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/26 18:45:26 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const{
	return (_type);
}

void Weapon::setType(std::string const & tmp) {
	_type = tmp;
}

Weapon::Weapon(std::string type) : _type(type){
}

Weapon::~Weapon() {
}