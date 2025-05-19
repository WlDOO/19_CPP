/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:23:36 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/11 13:58:57 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Amateria.hpp"
#include "Icharacter.hpp"

class Character : public ICharacter
{
	private :
		std::string Name;
		AMateria *Mat[4];
	public :
		Character();
		Character(std::string Name);
		Character(const Character& Char);
		Character& operator=(const Character& Char);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria *GetMateria(int idx);
	};

