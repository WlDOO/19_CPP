/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:55:01 by najeuneh          #+#    #+#             */
/*   Updated: 2025/04/03 17:43:53 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : size(N)
{
}

Span::Span(const Span& Span)
{
	*this = Span;
}

Span& Span::operator=(const Span& Span)
{
	if (this != &Span)
	{
		this->size = Span.size;
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(unsigned int nbr)
{
	if (vector.size() == size)
	{
		std::cout << "no place to add number" << std::endl;
		return ;
	}
		vector.push_back(nbr);
}

unsigned int	Span::shortestSpan()
{
	unsigned int stack;
	if (vector.size() != 0)
		stack = vector[0];
	for (unsigned int i = 0; i < size; i++)
	{
		if ((vector[i] && stack > vector[i]) || (vector[i] && vector[i] == 0))
			stack = vector[i];
	}
	return stack;
}

unsigned int	Span::longestSpan()
{
	unsigned int stack;
	if (vector.size() != 0)
		stack = vector[0];
	for (unsigned int i = 0; i < size; i++) {
		if (vector[i] && stack < vector[i])
			stack = vector[i];
	}
		return stack;
}