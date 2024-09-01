/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:58:25 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:30:38 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(const Character& other);
		Character(std::string &name);
		~Character();
		std::string const & getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
	private:
		std::string m_name;
		AMateria  *inv[4];
};
#endif
