/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:05:56 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/11 00:15:40 by dbarrene         ###   ########.fr       */
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
	private:
		Brain(const Brain& other);
		Brain& operator=(const Brain &other) const;
		std::string ideas[100];
};
#endif
