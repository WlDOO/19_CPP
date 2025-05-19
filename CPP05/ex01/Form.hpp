/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:48:33 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/26 15:57:29 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

#pragma once

class Bureaucrat;

class Form
{
	private:
		const std::string 	name;
		const unsigned int	grade_exec;
		const unsigned int	grade_sign;
		bool 				sign;
		Form();
	public:
		class GradeTooHighException : public std::exception {
		public :
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
		public :
			virtual const char *what() const throw();
		};
		Form(const std::string str, const unsigned int exec, const unsigned int sign);
		Form(const Form& For);
		Form& operator=(const Form& For);
		~Form();

		const std::string	GetName() const;
		unsigned int	GetExec() const;
		unsigned int	GetSign() const;
		bool			  	GetBsign() const;
		void	besigned(const Bureaucrat& Bur);
};