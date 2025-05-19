/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:53:52 by najeuneh          #+#    #+#             */
/*   Updated: 2025/04/03 16:49:30 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
		unsigned int	size;
		std::vector<unsigned int> vector;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span& Span);
		Span&	operator=(const Span& Span);
		~Span();

		void	addNumber(unsigned int nbr);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

