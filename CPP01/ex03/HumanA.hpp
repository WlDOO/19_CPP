/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:46:43 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 15:25:24 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon	&weapon;
		HumanA(void);
	public :
		HumanA(std::string Name, Weapon& weapon);
		~HumanA();
		std::string getWeapon();
		void	attack(void);
		
};
#endif