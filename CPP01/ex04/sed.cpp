/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:43:24 by najeuneh          #+#    #+#             */
/*   Updated: 2024/12/04 16:10:48 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sed::sed(char **av) : add(av[1]), file(av[1]), content(av[2])
{
}

sed::~sed(void)
{}

void sed::replace(char **av)
{
	int i = 0;

	if (file.is_open() == false)
	{
       	std::cout << "Error : file" << std::endl;
		return ;
	}
	i = add.size();
	add.insert(i, ".replace");
	std::ofstream fichier(this->add.c_str());
	if (fichier.is_open() == false)
	{
       	std::cout << "Error : file" << std::endl;
		file.close();
		return ;
	}
	size_t	pos;
	if (std::getline(file, line, '\0'))
	{
		pos = line.find(av[2]);
		while (pos != std::string::npos)
		{
			line.erase(pos, content.length());
			line.insert(pos, av[3]);
			pos = line.find(av[2]);
		}
	}
	fichier << line;
	file.close();
	fichier.close();
}