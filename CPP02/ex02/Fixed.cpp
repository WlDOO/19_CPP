/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:05:38 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/11 16:18:33 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : entier(0)
{
}

Fixed::Fixed(const Fixed& fixe)
{
	*this = fixe;
}

Fixed::Fixed(const int nb)
{
	this->entier = nb * 256;
}

Fixed::Fixed(const float nb)
{
	this->entier = static_cast<int>(nb * 256);
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& fixe)
{
	if (this->entier != fixe.entier)
		this->entier = fixe.entier;
	return *this;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->entier) / 256;
}

int		Fixed::toInt(void) const
{
	return (this->entier / 256);
}

std::ostream&	operator<<(std::ostream& line, const Fixed& fixe)
{
	line << fixe.toFloat();
	return line;
}

bool	Fixed::operator>(const Fixed& fixe)
{
	if (this->entier > fixe.entier)
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& fixe)
{
	if (this->entier < fixe.entier)
		return true;
	return false;
}
bool	Fixed::operator>=(const Fixed& fixe)
{
	if (this->entier >= fixe.entier)
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& fixe)
{
	if (this->entier <= fixe.entier)
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed& fixe)
{
	if (this->entier == fixe.entier)
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& fixe)
{
	if (this->entier != fixe.entier)
		return true;
	return false;
}

Fixed	Fixed::operator+(const Fixed& fixe)
{
	return this->toFloat() + fixe.toFloat();
}

Fixed	Fixed::operator-(const Fixed& fixe)
{
	return this->toFloat() - fixe.toFloat();
}

Fixed	Fixed::operator*(const Fixed& fixe)
{
	return this->toFloat() * fixe.toFloat();
}

Fixed	Fixed::operator/(const Fixed& fixe)
{
	return this->toFloat() / fixe.toFloat();
}

Fixed	Fixed::operator++(void)
{
	this->entier++;
	return *this;
}

Fixed	Fixed::operator--(void)
{
	return this->entier--;
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	this->entier++;
	return old;
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	this->entier--;
	return old;
}

Fixed& Fixed::min(Fixed& one, Fixed& two)
{
	if (one.toFloat() < two.toFloat())
		return one;
	return two;
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
	if (one.toFloat() < two.toFloat())
		return one;
	return two;
}

Fixed& Fixed::max(Fixed& one, Fixed& two)
{
	if (one.toFloat() > two.toFloat())
		return one;
	return two;
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
	if (one.toFloat() > two.toFloat())
		return one;
	return two;
}