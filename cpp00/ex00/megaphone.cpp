/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:47:03 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/25 14:18:39 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int j, i;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (j = 1; argv[j]; j++) {
			for (i = 0; argv[j][i]; i++)
				argv[j][i] = toupper(argv[j][i]);
		}
		for (j = 1; argv[j]; j++) {
			std::cout << argv[j];
		}
	}
	std::cout << std::endl;
}
