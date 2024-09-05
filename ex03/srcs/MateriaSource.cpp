/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:48:13 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/05 18:01:28 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	this->m_spellbook[0] = other.m_spellbook[0];
	this->m_spellbook[0] = nullptr;
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
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	std::cout << "Materia Type Not Found" << std::endl;
	return (nullptr);
}
