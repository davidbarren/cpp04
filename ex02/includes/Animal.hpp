/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:40:12 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 16:56:20 by dbarrene         ###   ########.fr       */
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
		virtual void makeSound() const = 0;
		Animal();
		virtual ~Animal();
		Animal& operator=(const Animal &other);
	private:
		Animal(const Animal &other);
};

#endif
