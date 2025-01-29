/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:22:48 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/22 16:50:15 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& Dog);
		~Dog();
		Dog& operator=(const Dog& Dog);
		void	makeSound() const;
};
