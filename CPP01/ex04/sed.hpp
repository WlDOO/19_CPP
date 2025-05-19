/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:43:30 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 16:01:56 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include "iostream"
#include <fstream>
#include <string>

class sed
{
	private:
		std::string	add;
		std::ifstream file;
		std::string	content;
		std::string	line;

	public:
		sed(char **av);
		~sed();
		void	replace(char **av);
};

#endif