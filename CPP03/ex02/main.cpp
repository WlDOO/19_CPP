/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:09:35 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/18 16:45:06 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap first;
    FragTrap second("Natan");
    FragTrap third(second);
    std::cout << "--------------------" << std::endl;
    second.attack("WIDOO");
    second.takeDamage(5);
    second.beRepaired(10);
    second.takeDamage(15);
    second.beRepaired(10);
    second.highFivesGuys();
    std::cout << "--------------------" << std::endl;
    return 0;	
}