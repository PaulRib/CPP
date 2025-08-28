/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:45:17 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/26 11:56:51 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string name);

int main() {
	int n = 10;
	Zombie* zbs;

	zbs = zombieHorde(n, "Zombio");
	delete [] zbs;
}
