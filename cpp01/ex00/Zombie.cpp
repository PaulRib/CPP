/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:59:57 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/26 14:40:15 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie [" << _name << "] is destroyed" << std::endl; 
}

void Zombie::announce( void ) {
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
