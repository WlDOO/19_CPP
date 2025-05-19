/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:40:30 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 16:56:45 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& cat) : WrongAnimal(cat)
{
	std::cout << "WrongCat copy constructor called" <<std::endl;	
	(*this) = cat;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& cat)
{
	std::cout <<"WrongCat Copy assignment operator called" << std::endl;
	if (this != &cat)
	{
		this->type = cat.type;
	}
	return *this;
}