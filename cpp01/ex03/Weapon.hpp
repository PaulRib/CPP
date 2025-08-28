/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:56:10 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/27 16:26:27 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

	private :
		std::string _type;

	public :
		const std::string& getType() const;
		void setType(const std::string &tmp);
		Weapon(std::string type);
		~Weapon();
};

#endif