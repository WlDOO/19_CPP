/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:28:51 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/29 13:44:19 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotmyRequest", 45, 72), target(target)
{	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Rob) : AForm(Rob), target(Rob.target)
{
	*this = Rob;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& Rob)
{
	if (this != &Rob)
	{
		target = Rob.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!GetBsign())
		throw std::runtime_error("the Form is not Sign");
	else if (executor.GetGrade() > GetExec())
		throw GradeTooLowException();
	else if (rand() % 2)
		std::cout << executor.GetName() << " has been robotomized successfully" << std::endl;
	else
	{
		std::cout << executor.GetName() << " has been robotomized failled" << std::endl;
	}
}
