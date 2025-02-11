/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:26:10 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/10 13:26:09 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	int  x;

	x = 2;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* Ani[x];
	std::cout << "-------------" << std::endl;
	for (int y = 0; y < x; y++)
	{
	if (y < x / 2)
		Ani[y] = new Dog();
	else
		Ani[y] = new Cat();
	}
	std::cout << "-------------" << std::endl;
	for (int y = 0; y < x; y++)
	{
	delete Ani[y];
	}
	std::cout << "-------------" << std::endl;
	delete j;
	delete i;
	std::cout << "-------------" << std::endl;
	return 0;
}