/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:36 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/26 14:38:53 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

AForm::AForm(const std::string str, const unsigned int exec, const unsigned int sign) : name(str), grade_exec(exec), grade_sign(sign), sign(false) 
{
	if (this->grade_exec < 1 || this->grade_sign < 1)
		throw GradeTooLowException();
	else if (this->grade_exec > 150 || this->grade_sign > 150)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& For) : name(For.name), grade_exec(For.grade_exec), grade_sign(For.grade_sign), sign(For.sign)
{
	*this = For;
}

AForm& AForm::operator=(const AForm& For)
{
	if (this != &For)
	{
		this->sign = For.sign;
	}
	return *this;
}

AForm::~AForm()
{}

const std::string	AForm::GetName() const
{
	return name;
}

unsigned int	AForm::GetExec() const
{
	return grade_exec;
}

unsigned int	AForm::GetSign() const
{
	return grade_sign;
}

bool	AForm::GetBsign() const
{
	return sign;
}

void	AForm::besigned(const	Bureaucrat& Bur)
{
	if (Bur.GetGrade() <= this->grade_sign)
	{
		this->sign = true;
		std::cout << Bur.GetName() << " signed " << this->GetName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& For)
{
	return os << "name " << For.GetName() << " AForm indicating signed " << For.GetBsign()
			<< " grade required to sign " << For.GetSign() << " grade required to execute " << For.GetExec() << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{	
	return "AForm grade too high";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "AForm grade too low";
}
