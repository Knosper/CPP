/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:33 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 08:33:44 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed*/

RobotomyRequestForm::RobotomyRequestForm():_target("default"),Form("RobotomyRequest",72,45)
{
	std::cout << "default RobotomyRequest constructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):_target(target),Form("RobotomyRequest",72,45)
{
	std::cout << "RobotomyRequest constructed, target = " << _target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp):Form("RobotomyRequest",72,45)
{
	*this = cp;
	std::cout << "copy RobotomyRequest constructed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequest destructed" << std::endl;
}

std::string	RobotomyRequestForm::getTarget()const
{
	return (_target);
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << "RobotomyRequest copied" << std::endl;
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor)const
{
	std::cout << "check if " << getName() << " is signable . . . " << std::endl;
	if (getFlag() == true)
	{
		std::cout << getName() << " is TRUE; " << executor.getName() << ": check if grade is high enough . . . " << std::endl;
		if (executor.getGrade() <= getExecGrade())
		{
			std::cout << executor.getName() << " EXECUTING " << getName() << std::endl;
			std::cout << Robot << std::endl;
		}
		else
			throw (GradeTooLowException());
	}
	else
		throw (FormFalseException());
}