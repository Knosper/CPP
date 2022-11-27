/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 06:55:17 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 09:14:07 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
	ptr_name[0] = "presidential pardonForm";
	ptr_name[1] = "robotomy request";
	ptr_name[2] = "shrubbery creation";
}

Intern::Intern(const Intern &cp)
{
	*this = cp;
}

Intern::~Intern(){}

Intern &Intern::operator=(const Intern &src)
{
	if (this != &src)
	{
		this->ptr_name[0] = src.ptr_name[0];
		this->ptr_name[1] = src.ptr_name[1];
		this->ptr_name[2] = src.ptr_name[2];
	}
	return (*this);
}

static Form	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(const std::string name, const std::string target)
{
	Form	*(*ptr[])(const std::string target) = {&makePresident,&makeRobot,&makeShrubbery};
	for (int i = 0; i < 3; i++)
		if (ptr_name[i] == name)
			return (ptr[i](target));
	std::cout << "Exception needed! wrong call" << std::endl;
	return (NULL);
}

