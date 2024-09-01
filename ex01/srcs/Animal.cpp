/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 15:35:07 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(): type("Generic Animal"){
	std::cout << "Default constructor for animal class" << std::endl;
}
Animal::~Animal(){
	std::cout << "Default destructor for animal class" << std::endl;
}
Animal ::Animal(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
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
Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}
