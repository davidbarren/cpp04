/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:05:56 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/01 15:46:38 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		void	set_ideas(const std::string &idea);
		std::string get_ideas() ;
		void	print_ideas_array() const;
	private:
		std::string ideas[100];
};
#endif
