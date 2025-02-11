/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:46:20 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 17:15:58 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
    {
        std::cout << "Error";
        return 0;
    }
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i] = Zombie(name);
        horde[i].announce();
    }
    return (horde);
}