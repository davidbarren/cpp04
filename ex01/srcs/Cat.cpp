/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/11 00:16:38 by dbarrene         ###   ########.fr       */
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
