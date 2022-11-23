/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/23 23:25:34 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form():_name("default form"),_exec_grade(150),_sign_grade(150),_flag(false)
{
	std::cout << _name << " form constructed" << std::endl;
}

Form::Form(std::string name):_name(name),_exec_grade(150),_sign_grade(150),_flag(false)
{
	std::cout << _name << " form constructed" << std::endl;
}

Form::Form(std::string name, const int sign_grade):_name(name), _sign_grade(sign_grade),_exec_grade(150),_flag(false)
{
	std::cout << _name << " form constructed" << std::endl;
}

Form::Form(std::string name, const int sign_grade, const int exec_grade):_name(name), _sign_grade(sign_grade),_exec_grade(exec_grade),_flag(false)
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

const char	*Form::GradeTooHighException::what()
{
	return ("Grade too high![Form]");
}

const char	*Form::GradeTooLowException::what()
{
    return ("Grade too low: highest grade of 1 is needed to get the boshy [Form]");
}

std::ostream	&operator<<(std::ostream &o, Form &src)
{
	std::string tmp;

	if (src.getFlag() == true)
		tmp = "true";
	else
		tmp = "false";
	o << "name: " << src.getName() << ", Form exec_grade: " << src.getExecGrade() << ", sign_grade: " << src.getSignGrade() << ", bool is: " << tmp;
	return (o);
}

void	Form::signForm(const Bureaucrat &src)
{
	if (_flag == true)
		std::cout << src.getName() << " signed form" << std::endl;
	else
		std::cout << src.getName() << " cannot sign form, invalid grade: " << src.getGrade() << std::endl;
}