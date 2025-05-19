/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:26:17 by najeuneh          #+#    #+#             */
/*   Updated: 2025/05/19 14:21:13 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	RPN(std::string str)
{
	std::stack<int> stack;
	for (int i = 0; str[i]; i++)
	{
		if (isdigit(str[i])) {
			if (i & 1 && str[i + 1] == ' ')
			{
				std::cerr << "Error not possible number" << std::endl;
				return ;
			}
			stack.push(str[i] - '0');
		}
		else if (str[i] == '-' || str[i] == '+' || str[i] == '/' || str[i] == '*')
		{
			if (i & 1 && str[i + 1] == ' ')
			{
				std::cerr << "Error: not possible sign" << std::endl;
				return ;
			}
			if (stack.size() < 2) {
				std::cerr << "Error: not possible calcul" << std::endl;
				return ;
			}
			int nbr1 = 0, nbr2 = 0, result = 0;
			nbr2 = stack.top();
			stack.pop();
			nbr1 = stack.top();
			stack.pop();
			if (nbr1 < 0 || nbr2 < 0)
			{
				std::cerr << "Error: not a positive number" << std::endl;
				return ;	
			}
			switch(str[i])
			{
				case '-' : {
					result = nbr1 - nbr2;
					break;
				}
				case '+' : {
					result = nbr1 + nbr2;
					break;
				}
				case '/' : {
					if (nbr1 == 0 || nbr2 == 0)
					{
						std::cerr << "Error: division by 0" << std::endl;
						return ;
					}
					result = nbr1 / nbr2;
					break;
				}
				case '*' : {
					result = nbr1 * nbr2;
					break;
				}
			}
			stack.push(result);
		}
		else if (str[i] != ' ')
		{
			std::cerr << "Error: not possible character" << std::endl;
			return ;
		}
	}
	if (stack.size() != 1)
	{
		std::cerr << "Error: not possbile argument" << std::endl;
		return ;
	}
	std::cout << stack.top() << std::endl;
}