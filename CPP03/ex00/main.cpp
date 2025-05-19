/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:09:35 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/21 16:20:46 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap first;
    ClapTrap second("Natan");
    ClapTrap third(second);
    std::cout << "--------------------" << std::endl;
    second.attack("WIDOO");

    second.takeDamage(5);
    second.beRepaired(10);
    second.takeDamage(15);
    second.beRepaired(10);

    std::cout << "--------------------" << std::endl;
    return 0;	
}