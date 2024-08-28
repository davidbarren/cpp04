/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:40:12 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/28 13:59:42 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
		void set_type(std::string type);
	public:
		const std::string& getType()const;
		virtual void	makeSound() const;
		Animal();
		virtual ~Animal();
	private:
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
};

#endif
