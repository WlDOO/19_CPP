/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:26:10 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/30 15:09:36 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal	*x = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "-------------" << std::endl;
	delete j;
	delete i;
	return 0;
}