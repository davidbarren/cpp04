/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:04:49 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/29 13:01:01 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
class AMateria
{
	protected:
		const std::string type;
	public:
		virtual AMateria *clone() const = 0;
		const std::string &getType() const;
		virtual void use(ICharacter &target);
};
