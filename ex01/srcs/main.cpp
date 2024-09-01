/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:39:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:07:26 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main(void)
{
	const int	arrsize = 2;
	Animal *arr[arrsize];
	std::cout << "Populating array of Animal *s" << std::endl;
	for (int k = 0; k < arrsize; k++)
	{
		if (k % 2)
			arr[k] = new Cat();
		else
			arr[k] = new Dog();
		arr[k]->makeSound();
	}
	std::cout << std::endl << "Casting array members into specific subclass pointers" << std::endl;
	Cat *catto = new Cat();
	catto->makeSound();
	std::cout << "================================" << std::endl;
	Cat testcat{ *catto };
	testcat.makeSound();
	std::cout << std::endl;
	catto->set_ideas("floof");
	std::cout << "catto idea: " << catto->get_ideas() << std::endl;
	std::cout << std::endl << "Using copy assignment operator on array before freeing" 
		<< std::endl;
	Animal copydog = *arr[0];
	Animal copycat = *arr[1];
	std::cout << std::endl << "deleting array members" << std::endl;
	for (int k = 0; k < arrsize; k++)
		delete arr[k];
	copydog.makeSound();
	copycat.makeSound();
	std::cout << "Testing copy constructors for dogs and cats" << std::endl;
	Cat firstcat;
	std::cout << firstcat.get_ideas() << std::endl;
	firstcat.set_ideas("cat idea");
	delete catto;
	testcat.makeSound();
	Cat secondcat = firstcat;
	std::cout << secondcat.get_ideas() << std::endl;
}

