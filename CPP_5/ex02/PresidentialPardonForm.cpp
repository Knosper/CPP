/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:10 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 06:19:08 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PreasidentialPardonForm.hpp"

/*PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox*/

PreasidentialPardonForm::PreasidentialPardonForm():Form("PreasidentialPardonForm",25,5),_target("default")
{
	std::cout << "default PreasidentialPardonForm constructed" << std::endl;
}

PreasidentialPardonForm::PreasidentialPardonForm(std::string target):Form("PreasidentialPardonForm",25,5),_target(target)
{
	std::cout << "PreasidentialPardonForm constructed, target = " << _target << std::endl;
}

PreasidentialPardonForm::PreasidentialPardonForm(const PreasidentialPardonForm &cp):Form("PreasidentialPardonForm",25,5)
{
	*this = cp;
	std::cout << "copy PreasidentialPardonForm constructed, target = " << _target << std::endl;
}

PreasidentialPardonForm::~PreasidentialPardonForm()
{
	std::cout << "PreasidentialPardonForm destructed" << std::endl;
}

std::string	PreasidentialPardonForm::getTarget() const
{
	return (_target);
}

PreasidentialPardonForm	&PreasidentialPardonForm::operator=(const PreasidentialPardonForm &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

void 		PreasidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << "check if " << getName() << " is signable . . . " << std::endl;
	if (getFlag() == true)
	{
		std::cout << getName() << " is TRUE; " << executor.getName() << ": check if grade is high enough . . . " << std::endl;
		if (executor.getGrade() <= getExecGrade())
		{
			std::cout << executor.getName() << " EXECUTING " << getName() << " form" << std::endl;
			std::cout << Preasi << std::endl;
		}
		else
			throw (GradeTooLowException());
	}
	else
		throw (FormFalseException());
}