/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:07:08 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/01 17:39:13 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap sc("Scav");

	sc.attack("Beau jack");
	sc.beRepaired(10);
	sc.guardGate();
	sc.takeDamage(500);
	sc.attack("Moi");
	sc.beRepaired(10);
	sc.takeDamage(1);
	sc.guardGate();
}