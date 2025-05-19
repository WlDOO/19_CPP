/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:09:43 by najeuneh          #+#    #+#             */
/*   Updated: 2024/11/19 14:44:28 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string& name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "the Zombie " << this->name
              << " is destroy" << std::endl;
}