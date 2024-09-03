/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:43:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 14:55:52 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{	
	private:
		Ice& operator=(Ice const &other);
		Ice(const Ice &other);
	public:
		Ice();
		Ice(std::string const &type);
		~Ice();
		AMateria *clone() const;
		void use(ICharacter& target);
};
#endif
