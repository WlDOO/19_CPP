/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:44:04 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/20 15:43:16 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	if (ac < 2)
	{
		std::cout << "Error: argument not good" << std::endl;
	}
	else
		PmergeMe(av);
}