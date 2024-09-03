/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:58:25 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 16:41:22 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	 m_name;
		void		populate_unequipped(AMateria **unequipped, int elementcount);
		AMateria	*inv[4];
		int			m_delcount; // count of how many unequipped materia should be deleted
		AMateria	**unequipped; // idea is to have an array of pointers to unequipped materia, then delete them at end
								  // maybe call a new reallocation every time that one is added? would use vector probably irl
								  //
	public:
		Character();
		Character(const Character& other);
		Character(std::string &name);
		~Character();
		std::string const & getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};
#endif
