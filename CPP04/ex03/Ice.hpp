/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:40:57 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/13 14:57:16 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Amateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice& Cure);
		Ice& operator=(const Ice& Cure);
		~Ice();
		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};

