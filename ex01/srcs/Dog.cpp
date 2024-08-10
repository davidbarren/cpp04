/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/11 00:16:31 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(){
	set_type("Dog");
	std::cout << "Default constructor for dog class" << std::endl;
	brn = new Brain;
}
Dog::~Dog(){
	delete brn;
	std::cout << "Default destructor for dog class" << std::endl;
}
void	Dog::makeSound() const
{
	std::cout << "Generic dog noises" << std::endl;
}
