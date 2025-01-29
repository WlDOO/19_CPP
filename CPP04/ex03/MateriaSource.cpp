/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:08:19 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/29 14:54:24 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{}

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
{}

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
	std::cout << "T'es nul mdr." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] == NULL || i == 3)
		{
			if (this->Materia[i - 1] != NULL && this->Materia[i]->getType() == type)
				return this->Materia[i]->clone();
			else if (i == 3 && this->Materia[i] != NULL && this->Materia[i]->getType() == type)
				return this->Materia[i]->clone();
		}
	}
	return 0;
}