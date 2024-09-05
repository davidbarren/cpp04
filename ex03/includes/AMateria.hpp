/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:04:49 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/05 16:57:11 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
class ICharacter;
class AMateria
{
	private:
		AMateria();
		AMateria& operator=(const AMateria &other);
	protected:
		const std::string type;
		AMateria(const AMateria &other);
		AMateria(const std::string type);
	public:
		virtual ~AMateria();
		virtual AMateria *clone() const = 0;
		const std::string &getType() const;
		virtual void use(ICharacter &target);
};
#endif
