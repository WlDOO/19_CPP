/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:05:38 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/05 17:54:29 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : entier(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixe)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixe;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->entier = nb * 256;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->entier = static_cast<int>(nb * 256);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixe)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
