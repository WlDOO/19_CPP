/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:36:59 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/29 14:34:45 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Icharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public :
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& Mat);
		AMateria& operator=(const AMateria& Amat);
		~AMateria();
		void	settype(std::string name);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};