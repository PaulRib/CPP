/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:07:08 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/01 18:46:39 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dp("Diamond");
	
	dp.attack("Beau jack");
	dp.beRepaired(10);
	dp.takeDamage(5);
	dp.guardGate();
	dp.highFivesGuys();
	dp.whoAmI();
}