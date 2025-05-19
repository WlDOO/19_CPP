/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:09:43 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 16:24:39 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string& name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "the Zombie " << this->name
              << " is destroy" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}