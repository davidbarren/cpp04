/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:12:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 15:46:39 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::~Brain(){
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain&other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = other.ideas[i];
}

Brain&	Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

void Brain::set_ideas(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}

std::string Brain::get_ideas() 
{
	if (!ideas[0].empty())
		return (ideas[0]);
	return ("No thoughts, head empty");
}

void	Brain::print_ideas_array() const
{
	for (int i = 0; i < 100; i++)
		std::cout << "Ideas at index " << i << ": " << ideas[i] << std::endl;
}
