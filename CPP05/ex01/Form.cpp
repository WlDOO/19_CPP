/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:36 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/29 13:41:44 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form(const std::string str, const unsigned int exec, const unsigned int sign) : name(str), grade_exec(exec), grade_sign(sign), sign(false) 
{
	if (this->grade_exec < 1 || this->grade_sign < 1)
		throw GradeTooLowException();
	else if (this->grade_exec > 150 || this->grade_sign > 150)
		throw GradeTooHighException();
}

Form::Form(const Form& For) : name(For.name), grade_exec(For.grade_exec), grade_sign(For.grade_sign), sign(For.sign)
{
	*this = For;
}

Form& Form::operator=(const Form& For)
{
	if (this != &For)
	{
		this->sign = For.sign;
	}
	return *this;
}

Form::~Form()
{}

const std::string	Form::GetName() const
{
	return name;
}

unsigned int	Form::GetExec() const
{
	return grade_exec;
}

unsigned int	Form::GetSign() const
{
	return grade_sign;
}

bool	Form::GetBsign() const
{
	return sign;
}

void	Form::besigned(const	Bureaucrat& Bur)
{
	if (Bur.GetGrade() <= this->grade_sign)
	{
		this->sign = true;
		std::cout << Bur.GetName() << " signed " << this->GetName() << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& For)
{
	return os << "name " << For.GetName() << " Form indicating signed " << For.GetBsign()
			<< " grade required to sign " << For.GetSign() << " grade required to execute " << For.GetExec() << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{	
	return "Form grade too high";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Form grade too low";
}
