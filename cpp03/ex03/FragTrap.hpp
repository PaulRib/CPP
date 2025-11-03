/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:51:51 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/09 17:27:58 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	protected:
		static const int base_health = 100;
		static const int base_energy = 100;
		static const int base_damage = 30;
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		virtual ~FragTrap();
		FragTrap& operator=(const FragTrap& copy);
		void highFivesGuys();
};
