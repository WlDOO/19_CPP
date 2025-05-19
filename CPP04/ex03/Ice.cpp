/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:56:03 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/11 14:33:10 by najeuneh         ###   ########.fr       */
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
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}