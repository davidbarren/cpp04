/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:48:13 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/06 14:55:31 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
//	for(int i = 0; i < 3; i++)
//		m_spellbook[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for(int i = 0; i < 3; i++)
	{
		if (other.m_spellbook[i])
			m_spellbook[i] = other.m_spellbook[i]->clone();
	}
}

MateriaSource::~MateriaSource(){

	for(int i = 0; i < 3; i++)
	{
		delete m_spellbook[i];
		delete m_trashcan[i];
	}
}

void	MateriaSource::learnMateria(AMateria *src)
{
	static int i = 0;
	if (i >= 3)
		return ;
	m_trashcan[i] = src;
	m_spellbook[i] = src->clone();
	i++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	std::cout << "Materia Type Not Found" << std::endl;
	return (nullptr);
}
