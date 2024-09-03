/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:56:57 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 14:51:46 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

void	Cure::use(ICharacter& target)
{
	(void) target;
	std::cout << "* heals " << "insert target name here" << "'s wounds"<< std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure);
}

Cure::~Cure(){
}
