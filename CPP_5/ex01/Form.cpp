/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/10 00:40:28 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form():_name("default"),_flag(false),_sign_grade(150),_exec_grade(150)
{
	std::cout << "default form constructed, with sign_grade: 150, and exec_grade: 150" << std::endl;
}

Form::Form(int sign_grade):_name("default"),_flag(false),_sign_grade(sign_grade),_exec_grade(150)
{
	const int a = this->getSignGrade();
	const int b = this->getExecGrade();
	if (a < 1 || b < 1)
		throw (Form::GradeTooHighException());
	else if (a > 150 || b > 150)
		throw (Form::GradeTooLowException());
	else
	{
		std::cout << _name << " form constructed, with sign_grade:" << _sign_grade \
		<< ", and exec_grade: " << _exec_grade << std::endl;
	}
}

Form::Form(std::string name):_name(name),_flag(false),_sign_grade(150),_exec_grade(150)
{
	std::cout << _name << " form constructed, with sign_grade:" << _sign_grade \
	<< ", and exec_grade: " << _exec_grade << std::endl;
}

Form::Form(std::string name, const int sign_grade):_name(name),_flag(false),_sign_grade(sign_grade),_exec_grade(150)
{
	const int a = this->getSignGrade();

	if (a < 1)
		throw (Form::GradeTooHighException());
	else if (a > 150)
		throw (Form::GradeTooLowException());
	else
	{
		std::cout << _name << " form constructed, with sign_grade:" << this->getSignGrade() \
		<< ", and exec_grade: " << this->getExecGrade() << std::endl;
	}
}

Form::Form(std::string name, const int sign_grade, const int exec_grade):_name(name),_flag(false),_sign_grade(sign_grade),_exec_grade(exec_grade)
{
	const int a = this->getSignGrade();
	const int b = this->getExecGrade();
	if (a < 1 || b < 1)
		throw (Form::GradeTooHighException());
	else if (a > 150 || b > 150)
		throw (Form::GradeTooLowException());
	else
	{
		std::cout << name << " form constructed, with sign_grade:" << sign_grade \
		<< ", and exec_grade: " << exec_grade << std::endl;
	}
}

Form::Form(const Form &cp):_name(cp._name),_flag(cp._flag),_sign_grade(cp._sign_grade),_exec_grade(cp._exec_grade)
{
	*this = cp;
	std::cout << _name << " form copied" << std::endl;	
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

int	Form::getSignGrade(void)const
{
	return (this->_sign_grade);
}

int	Form::getExecGrade(void)const
{
	return (this->_exec_grade);	
}

void	Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->getSignGrade() && src.getGrade() <= this->getExecGrade() && !this->getFlag())
	{
		std::cout << src.getName() << " signed form: " << src.getName() << std::endl;
		this->_flag = true;
	}
	else if (this->getFlag() == true)
	{
		std::cout << src.getName() << " cannot sign form: " \
		<< _name << ", because: form was already signed" << std::endl;
	}
	else
	{
		std::cout << src.getName() << " cannot sign form: " << _name << ", because:";
		throw (Form::GradeTooLowException());
	}
}

const char	*Form::GradeTooHighException::what()  const throw()
{
	return ("Grade too high![Form]");
}

const char	*Form::GradeTooLowException::what()  const throw()
{
    return ("Grade too low![Form]");
}

Form	&Form::operator=(const Form &src)
{
	(void)src;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form &src)
{
	std::string tmp;

	if (src.getFlag() == true)
		tmp = "true";
	else
		tmp = "false";
	o << "name: " << src.getName() << ", Form exec_grade: " << src.getExecGrade() \
	<< ", sign_grade: " << src.getSignGrade() << ", bool is: " << tmp;
	return (o);
}
