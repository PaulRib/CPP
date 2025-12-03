/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:16 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/26 15:24:44 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << RED << "Test of displaying the first element of the stack : " << RESET << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << RED << "Display the size of the stack after deleting the first element : " << RESET << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << RED << "Display values of stack in memory order : " << RESET << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::reverse_iterator it2 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite2 = mstack.rend();
	std::cout << RED << "Display values of stack in the stack order (LIFO) : " << RESET << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<int> s(mstack);
	return 0;
}