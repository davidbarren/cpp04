/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:04:04 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(){
	set_type("Dog");
	std::cout << "Default constructor for dog class" << std::endl;
	brn = new Brain;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Copy constructor for dog class" << std::endl;
		this->type = other.type;
		this->brn = new Brain(*other.brn);
}

Dog::~Dog(){
	delete brn;
	std::cout << "Default destructor for dog class" << std::endl;
}
void	Dog::makeSound() const
{
	std::cout << "Generic dog noises" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator for dog class " << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brn = new Brain(*other.brn);
	}
	return (*this);
}

void	Dog::set_ideas(const std::string &idea)
{
	brn->set_ideas(idea);
}

void	Dog::print_ideas_array() const
{
	brn->print_ideas_array();
}

std::string Dog::get_ideas()
{
	return (brn->get_ideas());
}
