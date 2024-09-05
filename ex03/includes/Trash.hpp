/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Trash.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:20:23 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/04 11:39:44 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
/* Like its name suggests, this class is Trash
 * only implemented because I can't use containers :(
 * also a good way to learn new things
 * */

class Trash
{
	private:
		AMateria** m_trash;
	public:
		void	addElement(AMateria *mat);
		void	copyArray(void);
		Trash();
		~Trash();



};
