/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:41:40 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/20 17:47:53 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private :
		Brain* _b;
	public :
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat& operator=(const Cat& copy);
		void makeSound() const;
};