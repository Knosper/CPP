/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:11:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/10 00:51:19 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"


class Form;

class Bureaucrat
{
private:

    const std::string	_name;
    int             	_grade;

public:

    Bureaucrat(const std::string name);
	Bureaucrat(const Bureaucrat &src);
    Bureaucrat(int grade);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat();
    ~Bureaucrat();

	void				setGrade(int grade);
	void				signForm(Form &src);
	void				executeForm(Form const & form);
	const std::string	getName(void)const;
	int					getGrade(void)const;

	void				incrementGrade(int in);
	void				decrementGrade(int de);

	Bureaucrat			&operator=(const Bureaucrat &cp);

	class GradeTooHighException : public std::exception 
	{
    	public:
			virtual const char * what () const throw();
	};
	class GradeTooLowException : public std::exception 
	{
    	public:
			virtual const char * what () const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &var);
