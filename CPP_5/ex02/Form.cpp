/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 05:57:58 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form():_name("default"),_exec_grade(150),_sign_grade(150),_flag(false)
{
	std::cout << _name << " form constructed, with sign_grade:" << _sign_grade \
	<< ", and exec_grade: " << _exec_grade << std::endl;
}

Form::Form(int sign_grade):_name("default"),_exec_grade(150),_sign_grade(sign_grade),_flag(false)
{
	if (_sign_grade < 1)
		throw (Form::GradeTooHighException());
	else if (_sign_grade > 150)
		throw (Form::GradeTooLowException());
	else
	{
		std::cout << _name << " form constructed, with sign_grade:" << _sign_grade \
		<< ", and exec_grade: " << _exec_grade << std::endl;
	}
}

Form::Form(std::string name):_name(name),_exec_grade(150),_sign_grade(150),_flag(false)
{
	std::cout << _name << " form constructed, with sign_grade:" << _sign_grade \
	<< ", and exec_grade: " << _exec_grade << std::endl;
}

Form::Form(std::string name, const int sign_grade):_name(name),_sign_grade(sign_grade),_exec_grade(150),_flag(false)
{
	if (_sign_grade < 1)
		throw (Form::GradeTooHighException());
	else if (_sign_grade > 150)
		throw (Form::GradeTooLowException());
	else
	{
		std::cout << _name << " form constructed, with sign_grade:" << _sign_grade \
		<< ", and exec_grade: " << _exec_grade << std::endl;
	}
}

Form::Form(std::string name, const int sign_grade, const int exec_grade):_name(name), _sign_grade(sign_grade),_exec_grade(exec_grade),_flag(false)
{
	if (_exec_grade < 1 || _sign_grade < 1)
		throw (Form::GradeTooHighException());
	else if (_exec_grade > 150 || _sign_grade > 150)
		throw (Form::GradeTooLowException());
	else
	{
		std::cout << _name << " form constructed, with sign_grade:" << _sign_grade \
		<< ", and exec_grade: " << _exec_grade << std::endl;
	}
}

Form::Form(const Form &cp):_name(cp._name),_flag(cp._flag),_sign_grade(cp._sign_grade),_exec_grade(cp._exec_grade)
{
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

const int	Form::getSignGrade(void)const
{
	return (this->_sign_grade);
}

const int	Form::getExecGrade(void)const
{
	return (this->_exec_grade);	
}

void	Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->getSignGrade() && !this->getFlag())
	{
		std::cout << src.getName() << " signed form: " << _name << std::endl;
		this->_flag = true;
	}
	else if (this->getFlag() == true)
	{
		std::cout << src.getName() << " cannot sign form: " \
		<< _name << ", because: form was already signed" << std::endl;
	}
	else
	{
		std::cout << src.getName() << " cannot sign form: " << _name << ", because: ";
		throw (Form::GradeTooLowException());
	}
}

const char	*Form::GradeTooHighException::what()
{
	return ("Grade too high![Form]");
}

const char	*Form::GradeTooLowException::what()
{
    return ("Grade too low![Form]");
}

const char	*Form::FormFalseException::what()
{
    return ("Form status false![Form]");
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

void	Form::execute(Bureaucrat const &executor) const
{
	(void)executor;
}
