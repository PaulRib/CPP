/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:54:58 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/11 16:12:51 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _learned[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource& copy);
		void learnMateria(AMateria* tmp);
		AMateria* createMateria(std::string const & type);
};