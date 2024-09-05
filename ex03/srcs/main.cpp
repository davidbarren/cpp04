/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:19:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/05 18:27:44 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"


int	main(void)
{

	AMateria *icyboy = new Ice();
	std::cout << icyboy->getType() << std::endl;
	AMateria *healer = new Cure();
	std::cout << healer->getType() << std::endl;


	IMateriaSource* src = new MateriaSource();
	src->learnMateria(icyboy);
	src->learnMateria(healer);
	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	ICharacter *bobert = new Character("boberto");
	me->use(0, *bobert);
	me->use(1, *bobert);
	delete src;
	delete  bobert;
	delete me;
	delete icyboy;
	delete healer;
	delete tmp;
	return 0;
}
