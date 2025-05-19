/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:38:38 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/28 13:23:01 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& Rob);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& Rob);
		~RobotomyRequestForm();

		virtual void	execute(Bureaucrat const & executor) const;
};

