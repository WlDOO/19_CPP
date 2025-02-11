/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:26:16 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/11 16:12:00 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.hpp"

Character::Character()
{
	for (int i=0; i < 4; i++)
		this->Mat[i] = NULL;
}

Character::Character(std::string Name) : Name(Name)
{
	for (int i=0; i < 4; i++)
		this->Mat[i] = NULL;
}

Character::Character(const Character &Char)
{
	*this = Char;
}

Character& Character::operator=(const Character &Char)
{
    if (this != &Char)
	{
        this->Name = Char.getName();
        for (int i=0; i < 4; i++)
		{
			if (Char.Mat[i])
				this->Mat[i] = Char.Mat[i]->clone();
			else 
				this->Mat[i] = NULL;
		}
    }
    return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Mat[i] != NULL)
		{
			delete this->Mat[i];
		}
	}
}

std::string	const & Character::getName() const
{
	return this->Name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Mat[i] == NULL){
			this->Mat[i] = m->clone();
			std::cout << "Character " << this->getName() << " has been equipped at slot " << i << std::endl; 
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

AMateria	*Character::GetMateria(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (!this->Mat[idx])
			return 0;
		return this->Mat[idx];
	}
	return 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx <= 3 && idx >= 0) && this->Mat[idx])
		this->Mat[idx]->use(target);
	else
		std::cout << "nothing to use" << std::endl;
}
