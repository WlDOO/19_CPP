/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:26:10 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/30 14:53:36 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* copy = meta;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* t = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	std::cout << "----------------" << std::endl;
	std::cout << copy->getType() << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	std::cout << "----------------" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	x->makeSound();
	t->makeSound();
	std::cout << "----------------" << std::endl;

	delete meta;
	delete j;
	delete i;
	delete x;
	delete t;
	return 0;
}