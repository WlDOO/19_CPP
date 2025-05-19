/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:00:17 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/15 14:02:28 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& Ani);
		virtual ~Animal() = 0;
		Animal& operator=(const Animal& Ani);
		virtual std::string	getType(void) const;
		virtual void makeSound(void) const = 0;
};

