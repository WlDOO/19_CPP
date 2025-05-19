/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:15:46 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/11 14:33:06 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type  = "cure";
}

Cure::Cure(const Cure& Cure) : AMateria(Cure)
{
	(*this) = Cure;
}

Cure& Cure::operator=(const Cure& Cure)
{
	if (this != &Cure)
	{
		this->type = Cure.type;
	}
	return *this;
}

Cure::~Cure()
{}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}