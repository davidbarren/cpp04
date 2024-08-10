/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:39:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/10 14:34:52 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* badmeta = new WrongAnimal();
	const WrongAnimal* badj = new WrongCat();


	std::cout << "Types" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << badj->getType() << " " << std::endl;

	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	badmeta->makeSound();
	badj->makeSound();

	delete badmeta;
	delete badj;
	delete meta;
	delete j;
	delete i;

}

