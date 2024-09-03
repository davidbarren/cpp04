/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:56:57 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 14:17:31 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

const std::string& Ice::getType(void) const
{
	return (this->type);
};

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << "insert target name here" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *ret = new Ice (*this);
	return (ret);
}

Ice::Ice() : AMateria(), type("ice")
{
}
