/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:56:07 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 16:19:51 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::~AMateria()
{
};

AMateria::AMateria(const std::string type): type(type)
{
}

const std::string &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &)
{
}
