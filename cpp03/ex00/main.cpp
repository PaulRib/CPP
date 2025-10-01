/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:07:08 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/30 17:26:20 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap cp("Etalon du cul");
	ClapTrap cp2(cp);

	cp.attack("Beau Jack");
	cp.takeDamage(5);
	cp.beRepaired(8);
	cp.takeDamage(50);
	cp.beRepaired(5);
	cp.attack("ClapTrap");
}