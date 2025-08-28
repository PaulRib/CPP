/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:56:04 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/27 16:26:35 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {

	private :
		Weapon* _wp;
		std::string _name;

	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& wp);
};

#endif