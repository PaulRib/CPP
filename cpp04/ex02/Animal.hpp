/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:35:09 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 16:10:46 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal {
	protected :
		std::string _type;
	public :
		AAnimal();
		AAnimal(const AAnimal& copy);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& copy);
		virtual void makeSound() const = 0;
		std::string getType() const;
};