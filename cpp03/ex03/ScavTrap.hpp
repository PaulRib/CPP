/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:27:42 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/09 17:27:56 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	protected:
		static const int base_health = 100;
		static const int base_energy = 50;
		static const int base_damage = 20;
	public :
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		virtual ~ScavTrap();
		ScavTrap& operator=(const ScavTrap& copy);
		void guardGate();
		void attack(const std::string& target);
};