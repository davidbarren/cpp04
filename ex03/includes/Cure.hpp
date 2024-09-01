/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:43:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:12:02 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{	
	private:

	public:
	AMateria *clone();
	void use(ICharacter& target);
	Cure();
	Cure(std::string const &type);
	Cure(Cure const &other);
	~Cure();
	Cure& operator=(Cure const &other);
};
#endif
