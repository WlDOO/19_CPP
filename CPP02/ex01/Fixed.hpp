/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:55:23 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/05 17:28:33 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <fstream>

class Fixed
{
private:
	int 				entier;
	const static int	bits = 8;
public:
	Fixed();
	Fixed(const Fixed& fixe);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();
	Fixed&	operator=(const Fixed& fixe);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& line, const Fixed& fixe);

#endif