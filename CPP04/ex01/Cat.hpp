/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:02:25 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/23 20:03:41 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *brain;
	public:
		Cat();
		Cat(const Cat& Cat);
		~Cat();
		Cat&	operator=(const Cat& Cat);
		void	makeSound() const;
};
