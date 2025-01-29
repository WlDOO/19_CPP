/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:23:20 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 20:04:31 by najeuneh         ###   ########.fr       */
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
	this->brain = new Brain(*Dog.brain);
	std::cout << "Dog copy constructor called" <<std::endl;	
	(*this) = Dog;
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
		delete this->brain;
		this->brain = new Brain(*Dog.brain);
		this->type = Dog.type;
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woaf" << std::endl;
}