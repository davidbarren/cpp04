/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:48:13 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 16:59:49 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

MateriaSource::MateriaSource(){
}

MateriaSource::MateriaSource(const MateriaSource &other)
{

}

MateriaSource::~MateriaSource(){
}

void	MateriaSource::learnMateria(AMateria *src)
{
	static int i = 0;
	if (i >= 3)
		return ;
	m_spellbook[i] = src;
	i++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria *ret;
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	std::cout << "Materia Type Not Found" << std::endl;
	return (nullptr);
}
