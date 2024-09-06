/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:01:02 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/06 17:20:01 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : m_index(0), m_name("Unknown"){
	for(int i = 0; i < 4; i++)
		inv[i] = nullptr;
}

Character::Character(std::string name) :m_index(0), m_name(name){
	for(int i = 0; i < 4; i++)
		inv[i] = nullptr;
}

Character::Character(const Character& other)
{
	this->m_name = other.m_name;
	for (int i = 0; i < 4; i++)
	{
		if (other.inv[i])
			inv[i] = other.inv[i]->clone();
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		for (int i = 0; i < 4; i++)
		{
			if (other.inv[i])
				inv[i] = other.inv[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		delete inv[i];
	for (int i = 0; i < 500; i++)
		delete floor[i];
}

std::string const& Character::getName() const
{
	return (this->m_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!inv[i])
		{
			inv[i] = m->clone();
			if (check_Floor(m))
			{
				floor[m_index] = m;
				m_index++;
			}
			return ;
		}
	}
//	std::cout << m_name << "'s inventory is full" << std::endl;
	return ;
};

void	Character::unequip(int idx)
{
	if (m_index >= 500)
		return ;
	if (!inv[idx])
	{
//		std::cout << "can not unequip an empty slot" << std::endl;
		return ;
	}
	floor[m_index] = inv[idx];
	inv[idx] = nullptr;
	m_index++;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || !inv[idx])
		return ;
	if (inv[idx])
		inv[idx]->use(target);
}

bool	Character::check_Floor(AMateria *m)
{
	for(int i = 0; i < 500; i++)
	{
		if (floor[i] == m)
			return (false);
	}
	return (true);
}

/*void	Character::printInventory() const
{
	for(int i = 0; i < 4; i++)
	{
		std::cout << "address of array elements" << std::endl;
		std::cout << "index:" << i << ": " << inv[i] << std::endl;
	}
		
}*/
