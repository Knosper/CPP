/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:11:14 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 08:32:54 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name):_name(name),_grade(150)
{
    std::cout << "Bureaucrat [" << _name << "](grade:" << _grade << "): constructed" << std::endl;
}

Bureaucrat::Bureaucrat():_name("default Bureaucrat"),_grade(150)
{
    std::cout << "[" << _name << "](grade:" << _grade << "): constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src):_name(src.getName()),_grade(src.getGrade())
{
	std::cout << "Bureaucrat copied from: " << _name << std::endl;
}

Bureaucrat::Bureaucrat(int grade):_name("default Bureaucrat"),_grade(150)
{
	try
	{
		this->setGrade(grade);
	}
	catch(GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
    std::cout << "[" << _name << "](grade:" << _grade << "): constructed" << std::endl;

}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name),_grade(150)
{
	try
	{
		this->setGrade(grade);
	}
	catch(GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
    std::cout << "[" << _name << "](grade:" << _grade << "): constructed" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "[" << _name << "](grade:" << _grade << "): destructed" << std::endl;
}

void	Bureaucrat::setGrade(int grade)
{
	std::cout << _name << ": try to set grade to: " << grade << std::endl;
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		std::cout << "Succedfully changed grade" << std::endl;
		_grade = grade;
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
	std::cout << _name << ": try to increment grade: " << _grade << " - " \
	<< in << " = " << _grade - in << std::endl;
	try
	{
		Bureaucrat::setGrade(_grade - in);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(int de)
{
	std::cout << _name << ": try to decrement grade: " << _grade << " + " << de \
	<< " = " << _grade + de << std::endl;
	try
	{
		Bureaucrat::setGrade(_grade + de);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(Form::FormFalseException &e)
	{
		std::cerr << e.what() << '\n';
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

const char	*Bureaucrat::GradeTooLowException::what()
{
    return ("Limit: Grade too low!");
}

const char	*Bureaucrat::GradeTooHighException::what()
{
    return ("Limit: Grade too high!");
}

void	Bureaucrat::signForm(Form &src)
{
	std::cout << "Bureaucrat " << _name << " grade(" << _grade << ")Try to sign form " \
	<< src.getName() << " grade(" << src.getSignGrade() << ")" << std::endl;
	try
	{
		src.beSigned(*this);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
}
