/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:29:49 by najeuneh          #+#    #+#             */
/*   Updated: 2025/04/01 18:59:59 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::cout << "----- vector -----" << std::endl;
	std::vector<int>	Arr;
	for(int i = 0; i < 10; i++)
	{
		Arr.push_back(i);
	}
	try
	{
		std::vector<int>::iterator it = easyfind(Arr, 7 );
		std::cout << *it << std::endl;
	}
	catch(...)
	{
		std::cerr << "Error" << '\n';
	}
	std::cout << "----- list -----" << std::endl;
	std::list<int> l;
	for(int i = 0; i < 10; i++)
	{
		l.push_back(i);
	}
	try
	{
		std::list<int>::iterator it = easyfind(l, 7 );
		std::cout << *it << std::endl;
	}
	catch(...)
	{
		std::cerr << "Error" << '\n';
	}
}