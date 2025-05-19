/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:13:30 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/28 15:33:54 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& Int)
{
	*this = Int;
}

Intern& Intern::operator=(const Intern& Int)
{
	if (this != &Int)
	{}
	return *this;
}

Intern::~Intern()
{}

static AForm* MakeShrubbery(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

static AForm* MakePresidential(const std::string target)
{
	return new PresidentialPardonForm(target);
}

static AForm* MakeRoboto(const std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	AForm *(*funcarray[])(const std::string) = {MakePresidential, MakeRoboto, MakeShrubbery};
	std::string	str[3] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"}; 

	for (int i = 0; i < 3; i++)
	{
		if (str[i] == form)
		{
			std::cout << "Intern creates " << str[i] << std::endl;
			return funcarray[i](target);
		}
	}
	std::cout << "the Form [" << target << "] does not exist"<< std::endl;
	return NULL;
}