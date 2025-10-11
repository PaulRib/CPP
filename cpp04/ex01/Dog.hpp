/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:48:50 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/08 16:51:45 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain* _b;
	public :
		Dog();
		Dog(const Dog& copy);
		virtual ~Dog();
		Dog& operator=(const Dog& copy);
		void makeSound() const;
};