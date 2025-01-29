/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:56:40 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 20:09:26 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& Brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	(*this) = Brain;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& Brain)
{
	std::cout <<"Brain Copy assignment operator called" << std::endl;
	if (this != &Brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = Brain.ideas[i];
	}
	return *this;
}