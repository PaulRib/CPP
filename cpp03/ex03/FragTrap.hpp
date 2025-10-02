/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:51:51 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 13:22:28 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		virtual ~FragTrap();
		FragTrap& operator=(const FragTrap& copy);
		void highFivesGuys();
};