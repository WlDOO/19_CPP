/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 14:54:10 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/29 14:47:40 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

AMateria::AMateria() : type("nothing")
{}

AMateria::AMateria(std::string const & type) 
{
	this->type = type;
}

AMateria::AMateria(const AMateria& Mat)
{
	(*this) = Mat;
}

AMateria& AMateria::operator=(const AMateria& Amat)
{
	if (this != &Amat)
	{
		this->type = Amat.type;
	}
	return *this;
}


AMateria::~AMateria()
{}

void	AMateria::settype(std::string name)
{
	type = name;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{ (void) target; }
