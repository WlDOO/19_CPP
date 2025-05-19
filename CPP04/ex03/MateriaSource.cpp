/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:08:19 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/11 16:04:35 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i=0; i < 4; i++)
		this->Materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& Mat)
{
	*this = Mat;
}

MateriaSource MateriaSource::operator=(const MateriaSource& Mat)
{
	if (this != &Mat)
	{
		*this = Mat;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i])
			delete this->Materia[i];
	}
}

void	MateriaSource::learnMateria(AMateria* Mat)
{
	if (!Mat)
		return ;
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->Materia[i] == NULL)
			{
				this->Materia[i] = Mat;
				return ;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *tmp = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] != NULL && this->Materia[i]->getType() == type)
			tmp = this->Materia[i]->clone();
	}
	return tmp;
}