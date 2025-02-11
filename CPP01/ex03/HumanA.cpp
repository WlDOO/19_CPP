/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:11:07 by najeuneh          #+#    #+#             */
/*   Updated: 2024/11/21 19:51:11 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& weapon) : name(Name), weapon(weapon) {}

void	HumanA::attack(void)
{
	std::cout << this->name << "> attacks with their " << getWeapon() << std::endl;
}

std::string	HumanA::getWeapon()
{
	return weapon.getType();
}


HumanA::~HumanA(void) {}
