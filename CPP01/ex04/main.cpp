/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:22:23 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/09 16:02:49 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "input is incorrect" << std::endl;
		return 0;	
	}
	else
	{
		sed sed1(av);
		sed1.replace(av);
	}
}