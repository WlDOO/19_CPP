/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:10:59 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 15:22:48 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *horde= zombieHorde(N, "natan");

    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;

    return 0;
}