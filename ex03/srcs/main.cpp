/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:19:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/06 17:19:35 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"


int	main(void)
{
	{
		std::cout << "Sample tests -------------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "Own tests ------------------" << std::endl;
		Ice *icy = new Ice();
		Cure *healer = new Cure();
		Character david("david");
		david.equip(icy);
		david.equip(healer);
		david.equip(healer);
		Character baboon("baboon");
		david.use(0, baboon);
		david.use(1, baboon);
		david.use(2, baboon);
		david.unequip(1);
		david.use(1, baboon);
		david.use(6, baboon);
		david.equip(icy);
		david.use(1,baboon);
		david.use(4,baboon);
		std::cout << "copying david into baboon --------------" << std::endl;
		baboon = david;
		baboon.use(0, david);
		baboon.use(1, david);
		baboon.use(2, david);
		baboon.use(3, david);
	}

	{
		std::cout << "Testing Second Main ----------" << std::endl;
		AMateria *temp;
		IMateriaSource *src = new MateriaSource();
		Character david("Hiver");
		temp = src->createMateria("ice");
		david.equip(temp);
		temp = src->createMateria("cure");
		david.equip(temp);
		Character npc("npc");
		david.use(0,npc);
		david.use(1,npc);
		npc = david;
		npc.unequip(1);
		npc.use(0, david);
		npc.use(1, david);
		delete src;
	}
	return 0;
}
