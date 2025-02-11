/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:23:20 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/31 16:17:51 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& Dog) : Animal(Dog)
{
	this->brain = NULL;
	*this = Dog;
	std::cout << "Dog copy constructor called" <<std::endl;	
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& Dog)
{
	std::cout <<"Dog Copy assignment operator called" << std::endl;
	if(this != &Dog)
	{
		this->type = Dog.getType();
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*Dog.brain);
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woaf" << std::endl;
}