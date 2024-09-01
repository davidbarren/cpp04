/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:40:12 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 15:51:30 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	public:
		void	makeSound() const;
		Cat();
		~Cat();
		Cat& operator=(const Cat &other);
		Cat(const Cat &other);
		void	set_ideas(const std::string &idea);
		std::string get_ideas() ;
		void	print_ideas_array() const;
	private:
		Brain *brn;
};

#endif
