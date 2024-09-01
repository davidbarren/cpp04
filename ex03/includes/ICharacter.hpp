/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:58:25 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/29 13:01:14 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter();
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) const = 0;
		virtual void unequip(int index) const = 0;
		virtual void use(int index, ICharacter& target) const = 0;



};
