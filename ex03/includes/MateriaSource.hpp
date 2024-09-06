/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:45:55 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/06 16:58:23 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource &other);
		void			learnMateria(AMateria *src);
		AMateria		*createMateria(std::string const &type);
		bool			check_Trash(AMateria *m);
	private:
		AMateria	*m_spellbook[4]{};
		AMateria	*m_trashcan[4]{};
		int			m_index;

};
#endif
