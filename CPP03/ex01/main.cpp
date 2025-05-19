/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:09:35 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/18 16:46:07 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap first;
    ScavTrap second("Natan");
    ScavTrap third(second);
    std::cout << "--------------------" << std::endl;
    second.attack("WIDOO");
    second.takeDamage(5);
    second.beRepaired(10);
    second.takeDamage(15);
    second.beRepaired(10);
    second.guardGate();
    std::cout << "--------------------" << std::endl;
    return 0;	
}