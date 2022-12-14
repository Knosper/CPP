/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:00:43 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/10 00:54:07 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_flag;
	const int			_sign_grade;
	const int			_exec_grade;
public:
	Form(std::string name);
	Form(int sign_grade);
	Form(std::string name, int sign_grade);
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form &cp);
	Form();
	~Form();

	void				beSigned(Bureaucrat &src);
	virtual void 		execute(Bureaucrat const &executor) const = 0;

	//getter
	const std::string	getName(void)const;
	bool				getFlag(void)const;
	int					getSignGrade(void)const;
	int					getExecGrade(void)const;

	//operators
	Form	&operator=(const Form &src);
	
	//exceptions
	class GradeTooHighException : public std::exception 
	{
    	public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception 
	{
    	public:
			virtual const char *what() const throw();
	};
	class FormFalseException : public std::exception 
	{
    	public:
			virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Form &src);