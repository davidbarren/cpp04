/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:56:07 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/05 17:59:55 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//AMateria::~AMateria()
//{
//};

AMateria::AMateria(const std::string type): type(type)
{
}

const std::string &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &)
{
	return ;
}

AMateria::~AMateria(){
};
