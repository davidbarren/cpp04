/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:43:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:23:31 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{	
	private:

	public:
	AMateria *clone();
	void use(ICharacter& target);
	Ice();
	Ice(std::string const &type);
	Ice(Ice const &other);
	~Ice();
	Ice& operator=(Ice const &other);
};
#endif
