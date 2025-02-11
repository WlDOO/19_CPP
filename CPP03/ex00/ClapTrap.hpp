/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:04:43 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/18 15:01:09 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	unsigned int	Hit;
	unsigned int	Energy;
	unsigned int	Attack;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& Clap);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& Clap);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif