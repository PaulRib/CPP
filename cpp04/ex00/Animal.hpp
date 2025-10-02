/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:35:09 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 14:07:35 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
	protected :
		std::string _type;
	public :
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal& operator=(const Animal& copy);
		virtual void makeSound() const;
		std::string getType() const;
};