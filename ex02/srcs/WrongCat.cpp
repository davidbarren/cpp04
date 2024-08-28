/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:49:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/10 14:35:24 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(){
	set_type("WrongCat");
	std::cout << "Default constructor for wrong cat class" << std::endl;
}
WrongCat::~WrongCat(){
	std::cout << "Default destructor for wrong cat class" << std::endl;
}
void	WrongCat::makeSound() const
{
	std::cout << "Generic wrong cat noises" << std::endl;
}
