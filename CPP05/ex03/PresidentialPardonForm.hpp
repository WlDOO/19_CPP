/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najeuneh <najeuneh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:40:07 by najeuneh          #+#    #+#             */
/*   Updated: 2025/03/28 13:22:31 by najeuneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(const std::string name);
		PresidentialPardonForm(const PresidentialPardonForm& Pre);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& Pre);
		~PresidentialPardonForm();
		
		virtual void	execute(Bureaucrat const & executor) const;
};
