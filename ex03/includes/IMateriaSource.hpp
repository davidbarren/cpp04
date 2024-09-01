/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:45:55 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:55:52 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria *src) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
};
#endif
