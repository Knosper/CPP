/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:50 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 06:27:20 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreation.hpp"

/*ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.*/

ShrubberyCreation::ShrubberyCreation():Form("ShrubberyCreation", 145, 137)
{
	std::cout << "default ShrubberyCreation constructed" << std::endl;
}

ShrubberyCreation::ShrubberyCreation(std::string target):Form("ShrubberyCreation", 145, 137),_target(target)
{
	std::cout << "ShrubberyCreation constructed, target = " << _target << std::endl;
}

ShrubberyCreation::ShrubberyCreation(ShrubberyCreation const &cp):Form("ShrubberyCreation", 145, 137)
{
	*this = cp;
	std::cout << "ShrubberyCreation copy constructor called, target = " << _target << std::endl;
}

ShrubberyCreation::~ShrubberyCreation()
{
	std::cout << "ShrubberyCreation destructed, target = " << _target << std::endl;
}

std::string	ShrubberyCreation::getTarget() const
{
	return (_target);
}

void 		ShrubberyCreation::execute(Bureaucrat const &executor) const
{
	std::cout << "check if " << getName() << "is signable . . . " << std::endl;
	if (getFlag() == true)
	{
		std::cout << getName() << " is TRUE; " << executor.getName() << ": check if grade is high enough . . . " << std::endl;
		if (executor.getGrade() <= getExecGrade())
		{
			std::cout << executor.getName() << " EXECUTING " << getName() << " form" << std::endl;
			std::cout << Shrubbery << std::endl;
		}
		else
			throw (GradeTooLowException());
	}
	else
		throw (FormFalseException());
}

ShrubberyCreation	&ShrubberyCreation::operator=(ShrubberyCreation const &src)
{
	if (this != &src)
		this->_target = src.getTarget();
	return (*this);
}
