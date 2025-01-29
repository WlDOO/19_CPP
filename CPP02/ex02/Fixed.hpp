/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:55:23 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/06 16:16:23 by najeuneh         ###   ########.fr       */
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
	//	comparaisson	//
	bool	operator>(const Fixed& fixe);
	bool	operator<(const Fixed& fixe);
	bool	operator>=(const Fixed& fixe);
	bool	operator<=(const Fixed& fixe);
	bool	operator==(const Fixed& fixe);
	bool	operator!=(const Fixed& fixe);
	//	arithmetique	//
	Fixed	operator+(const Fixed& fixe);
	Fixed	operator-(const Fixed& fixe);
	Fixed	operator*(const Fixed& fixe);
	Fixed	operator/(const Fixed& fixe);
	//	incrementation	//	
	Fixed	operator++(void);
	Fixed	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	//		//
	static Fixed& min(Fixed& one, Fixed& two);
	static const Fixed& min(const Fixed& one, const Fixed& two);
	static Fixed& max(Fixed& one, Fixed& two);
	static const Fixed& max(const Fixed& one, const Fixed& two);
};

std::ostream&	operator<<(std::ostream& line, const Fixed& fixe);

#endif