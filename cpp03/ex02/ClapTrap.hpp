/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:31:13 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/01 18:24:08 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap {
	protected :
		std::string _name;
		unsigned int _health;
		unsigned int _energy;
		unsigned int _damage;

	public :
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		virtual ~ClapTrap();
		ClapTrap& operator=(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};