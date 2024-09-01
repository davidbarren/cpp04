/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:58:25 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:45:45 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include <iostream>

class ICharacter
{
	public:
		virtual ~ICharacter();
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) const = 0;
		virtual void unequip(int index) const = 0;
		virtual void use(int index, ICharacter& target) const = 0;
};
#endif
