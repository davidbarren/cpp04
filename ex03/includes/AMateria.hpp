/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:04:49 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 14:17:24 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef  AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
class ICharacter;
class AMateria
{
	protected:
		const std::string type;
		AMateria();
		AMateria(const AMateria &other);
		AMateria& operator=(const AMateria &other);
	public:
		virtual ~AMateria();
		virtual AMateria *clone() const = 0;
		const std::string &getType() const;
		virtual void use(ICharacter &target);
};
#endif
