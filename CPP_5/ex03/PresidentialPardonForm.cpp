/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:10 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 08:33:56 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox*/

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5),_target("default")
{
	std::cout << "default PresidentialPardonForm constructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm",25,5),_target(target)
{
	std::cout << "PresidentialPardonForm constructed, target = " << _target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp):Form("PresidentialPardon",25,5)
{
	*this = cp;
	std::cout << "copy PresidentialPardon constructed, target = " << _target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardon destructed" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

void 		PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << "check if " << getName() << " is signable . . . " << std::endl;
	if (getFlag() == true)
	{
		std::cout << getName() << " is TRUE; " << executor.getName() << ": check if grade is high enough . . . " << std::endl;
		if (executor.getGrade() <= getExecGrade())
		{
			std::cout << executor.getName() << " EXECUTING " << getName() << " form" << std::endl;
			std::cout << Presi << std::endl;
		}
		else
			throw (GradeTooLowException());
	}
	else
		throw (FormFalseException());
}