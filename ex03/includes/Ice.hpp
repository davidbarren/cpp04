/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:43:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 13:28:52 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{	
	private:
		Ice& operator=(Ice const &other);
	public:
		Ice();
		Ice(std::string const &type);
		Ice(Ice const &other);
		~Ice();
	AMateria *clone() const;
	const std::string &getType() const;
	void use(ICharacter& target);
};
#endif
