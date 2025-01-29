/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:26:16 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/29 16:28:26 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.hpp"

Character::Character()
{}

Character::Character(std::string Name)
{
	this->Name = Name;
}

Character::Character(const Character& Char)
{
	(*this) = Char;
}

Character Character::operator=(const Character& Char)
{
	if (this != &Char)
	{
		this->Name = Char.Name;
	}
	return *this;
}

Character::~Character()
{}

std::string	const & Character::getName() const
{
	return this->Name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Mat[i] == NULL)
		{
			this->Mat[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "use a good index" << std::endl;
		return ;
	}
	else
	{
		this->Mat[idx] = NULL;
	}
}
void	Character::use(int idx, ICharacter& target)
{
	if (idx <= 3 || idx >= 0)
	{
		AMateria *Mat = target.getMateria(idx)
		
	}
}

AMateria	Character::GetMateria(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (!this->Mat[idx])
	}
}
