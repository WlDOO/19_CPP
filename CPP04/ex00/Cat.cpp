/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:03:49 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 16:46:40 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& Cat) : Animal(Cat)
{
	std::cout << "Cat copy constructor called" <<std::endl;	
	(*this) = Cat;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& Cat)
{
	std::cout <<"Cat Copy assignment operator called" << std::endl;
	if(this != &Cat)
		this->type = Cat.type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}