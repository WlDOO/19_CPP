/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:27:34 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/24 17:19:37 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		unsigned	int			grade;
		Bureaucrat();
	public:
		class GradeTooHighException : public std::exception {
			public :
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				virtual const char *what() const throw();
		};
		Bureaucrat(const std::string str, unsigned int grade);
		Bureaucrat(const Bureaucrat& Bur);
		Bureaucrat&	operator=(const Bureaucrat& Bur);
		~Bureaucrat();
		
		const std::string	GetName(void) const;
		unsigned int		GetGrade(void) const;
		void				incrementgrade();
		void				decrementgrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bur);