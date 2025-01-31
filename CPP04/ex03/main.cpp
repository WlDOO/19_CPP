/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:18:20 by najeuneh          #+#    #+#             */
/*   Updated: 2025/01/31 14:19:41 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Amateria.hpp"
#include "character.hpp"
#include "MateriaSource.hpp"
#include "ImaterialSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	ICharacter* bob = new Character("bob");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	delete me;
	delete src;
	delete bob;
	return 0;
}