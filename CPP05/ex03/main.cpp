/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:05:07 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/29 13:45:23 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	
	AForm* F1;
	AForm* F2;
	AForm* F3;
	AForm* F4;
	Bureaucrat B1("bob", 1);

	
	F1 = someRandomIntern.makeForm("Presidential pardon", "target");
	F2 = someRandomIntern.makeForm("Robotomy request", "target");
	F3 = someRandomIntern.makeForm("Shrubbery creation", "target");
	F4 = someRandomIntern.makeForm("test", "target");

	B1.signForm(*F3);
	B1.executeForm(*F3);
	
	if (F1)
		delete F1;
	if (F1)
		delete F2;
	if (F1)
		delete F3;
	if (F1)
		delete F4;
	return 0;
}