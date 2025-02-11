/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:54:49 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 15:25:47 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon	*weapon;
		HumanB(void);
	public:
		HumanB(std::string Name);
		HumanB(std::string Name, Weapon& weapon);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack(void);
		
};
#endif