/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:04:39 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/18 15:04:19 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit(10), Energy(10), Attack(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), Hit(10), Energy(10), Attack(0) 
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& Clap)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	(*this) = Clap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& Clap)
{
	std::cout <<"ClapTrap Copy assignment operator called" << std::endl;
	if (this != &Clap)
	{
		this->name = Clap.name;
		this->Hit = Clap.Hit;
		this->Energy = Clap.Energy;
		this->Attack = Clap.Attack;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energy <= 0)
		std::cout << "ClapTrap no more energy" << std::endl;
	else if (this->Hit <= 0)
		std::cout << "ClapTrap no more life" << std::endl;
	else
	{
		this->Energy --;
		std::cout << "ClapTrap " << this->name << " attacks " << target
				<< ", causing " << this->Attack << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Energy <= 0)
		std::cout << "ClapTrap no more energy" << std::endl;
	else if (this->Hit <= 0)
		std::cout << "ClapTrap no more life" << std::endl;
	else
	{
		if (amount > this->Hit)
			this->Hit = 0;
		else
			this->Hit -= amount;
		std::cout << "ClapTrap " << this->name << " is taking damage for the value of " << amount << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy <= 0)
		std::cout << "ClapTrap no more energy" << std::endl;
	else if (this->Hit <= 0)
		std::cout << "ClapTrap no more life" << std::endl;
	else
	{
		this->Energy--;
		this->Hit += amount;
		std::cout << "ClapTrap " << this->name << " is repaire is Hit for " << amount << std::endl;
	}
}



