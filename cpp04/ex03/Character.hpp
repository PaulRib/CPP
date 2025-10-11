/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:41:22 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/11 16:24:07 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _stuff[4];
		AMateria* _trash[9999];
	public:
		Character(std::string name);
		Character(const Character& copy);
		~Character();
		Character& operator=(const Character& copy);
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};