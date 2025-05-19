/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Icharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 14:06:37 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/29 14:58:42 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Amateria.hpp"

class AMateria;

class ICharacter
{
	public :
		virtual	~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* Mat) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};