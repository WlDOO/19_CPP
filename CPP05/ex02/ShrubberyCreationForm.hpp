/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:33:38 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/28 14:10:43 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

#define tree "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\"

class AForm;

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& Shru);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& Shru);
		~ShrubberyCreationForm();

		virtual void	execute(Bureaucrat const & executor) const;
};