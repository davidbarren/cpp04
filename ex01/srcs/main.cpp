/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:39:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/28 13:43:44 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main(void)
{
	const Animal *j = new Cat;
	const Animal *i = new Dog;
	Animal **animals = new Animal*[50];

	for (int k = 0; k < 25; k++)
	{
		animals[k] = new Cat;
		animals[k]->makeSound();
		animals[k]->getType();
	}
	for (int k = 25; k < 50; k++)
	{
		animals[k] = new Dog;
		animals[k]->makeSound();
	}
	for (int k = 0; k < 50; k++)
		delete animals[k];
	delete [] animals;
	delete j;
	delete i;
	return 0;
}

