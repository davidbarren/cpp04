/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:43:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/29 12:57:56 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
