/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:25:41 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/30 15:28:14 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& Ani)
{
	std::cout << "Animal copy constructor called" <<std::endl;	
	(*this) = Ani;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& Ani)
{
	std::cout <<"Animal Copy assignment operator called" << std::endl;
	if(this != &Ani)
		this->type = Ani.type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "no sound" << std::endl;
}