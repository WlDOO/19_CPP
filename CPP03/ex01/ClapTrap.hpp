/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:04:43 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/21 16:23:07 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int	Hit;
	int	Energy;
	int	Attack;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& Clap);
	virtual ~ClapTrap();
	ClapTrap& operator=(const ClapTrap& Clap);
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif