/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/10 14:20:25 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(): type("Generic Animal"){
	std::cout << "Default constructor for animal class" << std::endl;
}
Animal::~Animal(){
	std::cout << "Default destructor for animal class" << std::endl;
}
void Animal::makeSound() const
{
	std::cout << "Generic animal noises" << std::endl;
}

const std::string& Animal::getType() const
{
	return (type);
}

void	Animal::set_type(std::string type)
{
	this->type = type;
}
