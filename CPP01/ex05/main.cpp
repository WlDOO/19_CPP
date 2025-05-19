/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:10:50 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 15:15:17 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	std::string line;

	while(1)
	{
		std::cout << "which Level ? ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		harl.complain(line);
	}
}