/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:10:05 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/29 13:38:14 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat b1("maxime", 150);
		std::cout << b1 << std::endl;
	
		Bureaucrat b2("fake", 1);
		std::cout << b2 << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("Luc", 149);
		b1.decrementgrade();
		std::cout << b1 << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("Jos", 2);
		b1.incrementgrade();
		std::cout << b1 << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}