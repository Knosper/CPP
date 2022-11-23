/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:00:43 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/23 23:21:53 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_flag;
	const int			_sign_grade;
	const int			_exec_grade;
public:
	Form(std::string name);
	Form(std::string name, int sign_grade);
	Form(std::string name, int sign_grade, int exec_grade);
	Form();
	~Form();

	void				beSigned(const Bureaucrat &src);
	void				signForm(const Bureaucrat &src);

	//getter
	const std::string	getName(void)const;
	bool				getFlag(void)const;
	const int			getSignGrade(void)const;
	const int			getExecGrade(void)const;

	//exceptions
	class GradeTooHighException : public std::exception 
	{
    	public:
			virtual const char * what ();
	};
	class GradeTooLowException : public std::exception 
	{
    	public:
			virtual const char * what ();
	};
};

std::ostream	&operator<<(std::ostream &o, Form &src);