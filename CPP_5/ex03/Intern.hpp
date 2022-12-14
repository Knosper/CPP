/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 06:52:33 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/10 00:55:06 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern
{
private:
	Form		*ptr_call[3];
	std::string	ptr_name[3];
public:
	Intern();
	Intern(const Intern &cp);
	~Intern();

	Intern	&operator=(const Intern &src);
	
	Form *makeForm(const std::string name, const std::string target);

	class InvalidFormException : public std::exception 
	{
    	public:
			virtual const char *what() const throw();
	};
};