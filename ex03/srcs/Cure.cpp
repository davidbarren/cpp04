/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:56:57 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/05 17:59:20 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds"<< std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure);
}

Cure::~Cure(){
}
