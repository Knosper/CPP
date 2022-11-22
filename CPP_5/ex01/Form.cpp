/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 16:54:22 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form():_name("default"),_exec_grade(150),_sign_grade(150),_flag(false)
{
	std::cout << _name << " form constructed" << std::endl;
}

Form::~Form()
{
	std::cout << _name << " form destructed" << std::endl;
}

const std::string	Form::getName(void)const
{
	return (this->_name);
}

bool	Form::getFlag(void)const
{
	return (this->_flag);
}

const int	Form::getSignGrade(void)const
{
	return (this->_sign_grade);
}

const int	Form::getExecGrade(void)const
{
	return (this->_exec_grade);	
}

void	Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() == 1)
	{
		std::cout << src.getName() << " enabled to be signed" << std::endl;
		this->_flag = true;
	}
	else
	{
		throw (Form::GradeTooLowException());
	}
}