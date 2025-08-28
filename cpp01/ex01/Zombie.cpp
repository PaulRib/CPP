/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:43:22 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/26 17:52:31 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

void Zombie::setName(std::string const & tmp) {
	_name = tmp;
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << "Zombie [" << _name << "] is destroyed" << std::endl; 
}

void Zombie::announce( void ) {
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
