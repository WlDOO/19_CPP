/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:03:49 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/31 16:23:02 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& Cat) : Animal(Cat)
{
	this->brain = NULL;
	*this = Cat;
	std::cout << "Cat copy constructor called" <<std::endl;	
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& Cat)
{
	std::cout <<"Cat Copy assignment operator called" << std::endl;
	if(this != &Cat)
	{
		this->type = Cat.getType();
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*Cat.brain);
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}