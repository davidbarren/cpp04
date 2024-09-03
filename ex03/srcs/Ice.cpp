/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:56:57 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 14:47:33 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

void	Ice::use(ICharacter& target)
{
	(void) target;
	std::cout << "* shoots an ice bolt at " << "insert target name here" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice);
}

Ice::~Ice(){
}
