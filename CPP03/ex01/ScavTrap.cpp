/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:39:08 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/21 16:27:38 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->name = "Default ScavTrap";	
	this->Hit = 100;
	this->Energy = 50;
	this->Attack = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->name = name;	
	this->Hit = 100;
	this->Energy = 50;
	this->Attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& Scav) : ClapTrap(Scav)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	(*this) = Scav;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& Scav)
{
	std::cout <<"ScavTrap Copy assignment operator called" << std::endl;
	if (this != &Scav)
	{
		this->name = Scav.name;
		this->Hit = Scav.Hit;
		this->Energy = Scav.Energy;
		this->Attack = Scav.Attack;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Energy <= 0)
		std::cout << "ScavTrap no more energy" << std::endl;
	else if (this->Hit <= 0)
		std::cout << "ScavTrap no more life" << std::endl;
	else
	{
		this->Energy--;
		std::cout << "ScavTrap " << this->name << " attacks " << target
				<< ", causing " << this->Attack << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in guard" << std::endl;
}
