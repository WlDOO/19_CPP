/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:31:11 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/24 14:17:23 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(const std::string str, unsigned int grade) : name(str), grade(grade)
{
	    if (grade < 1)
            throw GradeTooHighException();
        if (grade > 150)
            throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& Bur) : name(Bur.name), grade(Bur.grade)
{
	*this = Bur;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& Bur)
{
	if (this != &Bur)
	{
		this->grade = Bur.grade;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bur)
{
	return os << Bur.GetName() << ", bureaucat grade <" << Bur.GetGrade() << ">."; 
}


Bureaucrat::~Bureaucrat()
{}

void	Bureaucrat::decrementgrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::incrementgrade()
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

const std::string	Bureaucrat::GetName() const
{
	return name;
}

unsigned int	Bureaucrat::GetGrade() const
{
	return grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade too low";
}