/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:19:44 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/03 14:51:33 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

int	main(void)
{
	AMateria *icyboy = new Ice();
	std::cout << icyboy->getType() << std::endl;
	delete(icyboy);
	AMateria *healer = new Cure();
	std::cout << healer->getType() << std::endl;
	delete(healer);
	return 0;
}
