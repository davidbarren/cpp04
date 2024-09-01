/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:39:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 15:56:05 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main(void)
{
	const Animal *j = new Cat;
	const Animal *i = new Dog;
	const int	arrsize = 2;
	Animal *arr[arrsize];
	for (int k = 0; k < arrsize; k++)
	{
		if (k % 2)
			arr[k] = new Cat();
		else
			arr[k] = new Dog();
		arr[k]->makeSound();
	}
	Animal copydog = *arr[0];
	Animal copycat = *arr[1];
//	copycat.makeSound();
//	copydog.makeSound();
	for (int k = 0; k < arrsize; k++)
		delete arr[k];
	delete j;
	delete i;
	copycat.makeSound();
	copydog.makeSound();
	 Dog *doggo = new Dog;
	 Cat *catto = new Cat;
	doggo->set_ideas("woof");
	catto->set_ideas("floof");
	std::cout << "doggo idea: " << doggo->get_ideas() << std::endl;
	std::cout << "catto idea: " << catto->get_ideas() << std::endl;
	delete doggo;
	delete catto;
}

