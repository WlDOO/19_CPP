/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:41:56 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/13 14:46:29 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Amateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& Cure);
		Cure& operator=(const Cure& Cure);
		~Cure();
		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};
