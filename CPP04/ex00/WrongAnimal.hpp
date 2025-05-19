/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:25:43 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 16:51:39 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected :
		std::string	type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& Wrong);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& Wrong);
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

