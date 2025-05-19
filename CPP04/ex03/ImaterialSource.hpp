/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImaterialSource.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:19:43 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/29 14:24:07 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Amateria.hpp"

class IMateriaSource
{
	public :
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* Mat) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};