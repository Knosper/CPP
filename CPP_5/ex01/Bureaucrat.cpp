/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:11:14 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 15:56:26 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name):_name(name),_grade(150)
{
    std::cout << "Bureaucrat [" << _name << "]: constructed" << std::endl;
}

Bureaucrat::Bureaucrat():_name("default"),_grade(150)
{
    std::cout << "Bureaucrat [" << _name << "]: constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src):_name(src.getName()),_grade(src.getGrade())
{
	std::cout << "Bureaucrat copied from: " << _name << std::endl;
}

Bureaucrat::Bureaucrat(int grade):_name("default"),_grade(grade)
{
    std::cout << "Bureaucrat [" << _name << "]: constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name),_grade(grade)
{
    std::cout << "Bureaucrat [" << _name << "]: constructed" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat [" << _name << "]: destructed" << std::endl;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		_grade = grade;
    	std::cout << "Grade of [" << _name << "] set to: " << _grade << std::endl;
	}
}

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade(int in)
{
	std::cout << _name << ": try to increment grade: " << _grade << " - " << in << " = " << _grade - in << std::endl;
	try
	{
		Bureaucrat::setGrade(_grade - in);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	Bureaucrat::decrementGrade(int de)
{
	std::cout << _name << ": try to decrement grade: " << _grade << " + " << de << " = " << _grade + de << std::endl;
	try
	{
		Bureaucrat::setGrade(_grade + de);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cp)
{
	if (this == &cp)
		return *this;
	std::cout << "Bureaucrat copied from: " << cp.getName() << std::endl;
	this->_grade = cp.getGrade();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &var)
{
	o << var.getName() << ", Bureaucrat grade " << var.getGrade();
	return (o);
}
