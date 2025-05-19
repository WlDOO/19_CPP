/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:36:31 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/28 13:27:58 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 137, 145), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& Shru) : AForm(Shru), target(Shru.target)
{
	*this = Shru;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& Shru)
{
	if (this != &Shru)
	{
		target = Shru.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!GetBsign())
		throw std::runtime_error("the Form is not Sign");
	else if (executor.GetGrade() > GetExec())
		throw GradeTooLowException();
	else
	{
		std::cout << tree << std::endl;
	}
}
