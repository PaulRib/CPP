/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:07:08 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/01 18:05:46 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap ft("Frag");

	ft.attack("Beau jack");
	ft.beRepaired(10);
	ft.highFivesGuys();
	ft.takeDamage(500);
	ft.attack("Moi");
	ft.beRepaired(10);
	ft.takeDamage(1);
	ft.highFivesGuys();
}