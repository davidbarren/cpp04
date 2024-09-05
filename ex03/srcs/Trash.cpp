/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Trash.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:35:52 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/04 11:40:04 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Trash.hpp"

Trash::Trash(): m_trash(nullptr)
{
}

Trash::~Trash()
{
	if (m_trash)
		delete m_trash;
}

void	Trash::copyArray()
{

}

void	addElement(AMateria *mat)
{
	static int i = 0;
};

