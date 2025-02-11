/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:08:40 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/28 13:46:09 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Amateria.hpp"
#include "ImaterialSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *Materia[4];
	public :
	MateriaSource();
	MateriaSource(const MateriaSource& Mat);
	MateriaSource operator=(const MateriaSource& Mat);
	~MateriaSource();
	void	learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};