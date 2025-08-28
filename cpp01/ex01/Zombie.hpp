/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:43:12 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/27 16:26:44 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
 #define ZOMBIE_H

#include <iostream>

class Zombie {

	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setName(std::string const & tmp);
};

#endif