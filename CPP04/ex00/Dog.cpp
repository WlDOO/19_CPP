/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:23:20 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 16:47:33 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& Dog) : Animal(Dog)
{
	std::cout << "Dog copy constructor called" <<std::endl;	
	(*this) = Dog;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& Dog)
{
	std::cout <<"Dog Copy assignment operator called" << std::endl;
	if(this != &Dog)
		this->type = Dog.type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woaf" << std::endl;
}