/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:39:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/11 00:18:56 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal *j = new Cat;
	const Animal *i = new Dog;

//	std::cout << "address of i: " << i << std::endl;
//	std::cout << "address of j: " << j << std::endl;
	delete j;
	delete i;
	return 0;
}

