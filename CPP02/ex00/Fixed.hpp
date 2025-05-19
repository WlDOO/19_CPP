/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:36:50 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/05 16:15:18 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					entier;
	const static int	bits = 8;
public:
			Fixed();
			Fixed(const Fixed& fixe);
			~Fixed();
	Fixed&	operator=(const Fixed& fixe);
	int		getRawBits(void);
	void	setRawBits(int const raw);
};

#endif