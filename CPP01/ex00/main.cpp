/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:10:59 by najeuneh          #+#    #+#             */
/*   Updated: 2024/11/19 14:45:38 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name = "natan";
    Zombie nat(name);
    nat.announce();
    name = "thomas";
    Zombie *tho = newZombie(name);
    tho->announce();
    randomChump("carlos");
    delete tho;
}