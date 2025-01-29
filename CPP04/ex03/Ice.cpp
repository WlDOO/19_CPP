/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:56:03 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/29 14:48:14 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice& ice) : AMateria(ice)
{
	(*this) = ice;
}

Ice& Ice::operator=(const Ice& Ice)
{
	if (this != &Ice)
	{
		this->type = Ice.type;
	}
	return *this;
}

Ice::~Ice()
{}

AMateria* Ice::clone() const
{
	AMateria *Mat = new Ice();
	return Mat;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}