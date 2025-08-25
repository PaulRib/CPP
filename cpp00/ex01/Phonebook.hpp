/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:55:12 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/22 18:15:31 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

class PhoneBook {
  private:
	int 	_count;
	Contact _contact[8];

  public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void searchContact();
	void display_contact(int i);
	void who_is();
};

#endif