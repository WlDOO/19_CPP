/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:18:20 by najeuneh          #+#    #+#             */
/*   Updated: 2025/02/11 16:15:39 by najeuneh         ###   ########.fr       */
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
	Character* me = new Character("me");
	Character* copy = new Character(*me);
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	copy->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	copy->use(0, *bob);
	delete tmp;
	delete src;
	delete me;
	delete copy;
	delete bob;
	return 0;
}