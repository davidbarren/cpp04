/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/10 14:31:37 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Generic WrongAnimal"){
	std::cout << "Default constructor for wrong animal class" << std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "Default destructor for wrong animal class" << std::endl;
}
void WrongAnimal::makeSound() const
{
	std::cout << "Generic wrong animal noises" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::set_type(std::string type)
{
	this->type = type;
}
