/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:57:22 by najeuneh          #+#    #+#             */
/*   Updated: 2024/11/22 13:53:45 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name), weapon(NULL) {}

HumanB::HumanB(std::string Name, Weapon& weapon) : name(Name), weapon(&weapon) {}

void	HumanB::attack(void)
{
	std::cout << this->name << "> attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB() {}