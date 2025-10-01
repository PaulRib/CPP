/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:27:42 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/01 17:37:03 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& copy);
		void guardGate();
		void attack(const std::string& target);
};