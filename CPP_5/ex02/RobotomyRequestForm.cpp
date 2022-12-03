/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:33 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/03 02:04:48 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequest.hpp"

/*RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed*/

RobotomyRequest::RobotomyRequest():Form("RobotomyRequest",72,45),_target("default")
{
	std::cout << "default RobotomyRequest constructed" << std::endl;
}

RobotomyRequest::RobotomyRequest(std::string target):Form("RobotomyRequest",72,45),_target(target)
{
	std::cout << "RobotomyRequest constructed, target = " << _target << std::endl;
	
}

RobotomyRequest::RobotomyRequest(const RobotomyRequest &cp):Form("RobotomyRequest",72,45),_target(cp.getTarget())
{
	*this = cp;
	std::cout << "copy RobotomyRequest constructed" << std::endl;

}

RobotomyRequest::~RobotomyRequest()
{
	std::cout << "RobotomyRequest destructed" << std::endl;
}

std::string	RobotomyRequest::getTarget()const
{
	return (_target);
}

RobotomyRequest	&RobotomyRequest::operator=(const RobotomyRequest &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

void	RobotomyRequest::execute(const Bureaucrat &executor)const
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