/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:11:19 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 15:24:51 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "iostream"

class Weapon {
	private :
		std::string type;
		Weapon(void);
	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string getType(void);
		void	setType(std::string type);
};
#endif