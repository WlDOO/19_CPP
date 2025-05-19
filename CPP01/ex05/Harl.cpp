/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:32:10 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 15:10:48 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



Harl::Harl()
{
	Pointfonc[0] = &Harl::debug;
	Pointfonc[1] = &Harl::info;
	Pointfonc[2] = &Harl::warning;
	Pointfonc[3] = &Harl::error;
}
 
Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
			  << std::endl;	
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
			  << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
			  << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(std::string level)
{
	std::string compare[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == compare[i])
		{
			(this->*Pointfonc[i])();
			return ;
		}
	}
	std::cout << "Use a good level" << std::endl;
}