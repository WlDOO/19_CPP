/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:05:07 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/28 13:12:37 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("Taipan", 3);
		Bureaucrat b2("tamarin", 1);
		Bureaucrat b3("maral", 150);

		//ShrubberyCreationForm
		std::cout << "---- Shrubbery ----" << std::endl;
		ShrubberyCreationForm shru("home");
		b1.signForm(shru);
		b1.executeForm(shru);
		
		std::cout << "---- Robotomyrequest ----" << std::endl;
		RobotomyRequestForm	Robot("Robot");
		b2.signForm(Robot);
		b2.executeForm(Robot);

		std::cout << "---- PresidentialPardon ----" << std::endl;
		PresidentialPardonForm Pre("President");
		b3.signForm(Pre);
		b3.executeForm(Pre);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}