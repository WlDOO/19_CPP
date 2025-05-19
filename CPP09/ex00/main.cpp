/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:06:46 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/07 17:01:37 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char** av)
{
	if (ac != 2)
		std::cout << "Bad argumet" << std::endl;
	else {
		std::map<std::string, float> map = Checkcsv();
		Checkinput(map, av[1]);
	}
}
