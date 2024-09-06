/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:48:13 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/06 17:20:39 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


bool	MateriaSource::check_Trash(AMateria *m)
{
	for (int i = 0; i < 3; i++)
	{
		if (m_trashcan[i] == m)
		return false;
	}
	return true;
}

MateriaSource::MateriaSource(){
	m_index = 0;
	for(int i = 0; i < 3; i++)
	{
		m_spellbook[i] = nullptr;
		m_trashcan[i] = nullptr;
	}
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
	if (m_index >= 4)
		return ;
	if (check_Trash(src))
		m_trashcan[m_index] = src;
	m_spellbook[m_index] = src->clone();
	m_index++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
//	std::cout << "Materia Type Not Found" << std::endl;
	return (nullptr);
}
