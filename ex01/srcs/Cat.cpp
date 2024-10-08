/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 18:01:22 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(){
	set_type("Cat");
	std::cout << "Default constructor for cat class" << std::endl;
	brn = new Brain;
}
Cat::~Cat(){
	delete brn;
	std::cout << "Default destructor for cat class" << std::endl;
}
void	Cat::makeSound() const
{
	std::cout << "Generic cat noises" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Copy constructor for cat class" << std::endl;
		this->brn = new Brain(*other.brn);
		this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy asssignment for cat class" << std::endl;
	if (this != &other)
	{
		this->brn = new Brain(*other.brn);
		this->type = other.type;
	}
	return (*this);
}

void	Cat::set_ideas(const std::string &idea)
{
	brn->set_ideas(idea);
}

void	Cat::print_ideas_array() const
{
	brn->print_ideas_array();
}

std::string Cat::get_ideas()
{
	return (brn->get_ideas());
}
