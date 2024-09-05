/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:01:02 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/05 18:28:49 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : m_name("Unknown"){
	for(int i = 0; i > 4; i++)
		inv[i] = nullptr;
}

Character::Character(std::string name) : m_name(name){
	for(int i = 0; i > 4; i++)
		inv[i] = nullptr;
}

Character::Character(const Character& other)
{
	this->m_name = other.m_name;
}

Character::~Character(){
	for (int i = 0; i > 4; i++)
		delete inv[i];
}

std::string const& Character::getName() const
{
	return (this->m_name);
}
//void	Character::populate_unequipped(AMateria **unequipped, int elementcount)
//{
//
//}
void	Character::equip(AMateria *m)
{
	static int i = 0;
	if (i > 3)
	{
		std::cout << m_name << "'s inventory is full" << std::endl;
		return ;
	}
	inv[i] = m;
	i++;
};

void	Character::unequip(int idx)
{
	if (!inv[idx])
	{
		std::cout << "can not unequip an empty slot" << std::endl;
		return ;
	}
//	m_delcount += 1;
	inv[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (inv[idx])
		inv[idx]->use(target);
	else
		std::cout << "No Materia Equipped" << std::endl;
}
