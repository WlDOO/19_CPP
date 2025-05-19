/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:39:46 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/18 16:41:57 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->name = "Default FragTrap";	
	this->Hit = 100;
	this->Energy = 100;
	this->Attack = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->name = name;	
	this->Hit = 100;
	this->Energy = 100;
	this->Attack = 30;
}

FragTrap::FragTrap(const FragTrap& Frag) : ClapTrap(Frag)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = Frag;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& Frag)
{
	std::cout <<"FragTrap Copy assignment operator called" << std::endl;
	if (this != &Frag)
	{
		this->name = Frag.name;
		this->Hit = Frag.Hit;
		this->Energy = Frag.Energy;
		this->Attack = Frag.Attack;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " do a high Five" << std::endl;
}
