/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:29:43 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 16:57:18 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& Wrong)
{
	std::cout << "WrongAnimal copy constructor called" <<std::endl;	
	(*this) = Wrong;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& Wrong)
{
	std::cout <<"WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &Wrong)
	{
		this->type = Wrong.type;
	}
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong sound" << std::endl;
}
