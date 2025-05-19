/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:56:36 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/28 13:28:51 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : AForm("PresidentialPardon", 5, 25), target(name)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& Pre) : AForm(Pre), target(Pre.target) 
{
	*this = Pre;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& Pre)
{
	if (this != &Pre)
	{
		target = Pre.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!GetBsign())
		throw std::runtime_error("the Form is not Sign");
	else if (executor.GetGrade() > GetExec())
		throw GradeTooLowException();
	else
		std::cout << executor.GetName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
