/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:11:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/23 22:39:55 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

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

	const std::string	getName(void)const;
	int					getGrade(void)const;

	void				incrementGrade(int in);
	void				decrementGrade(int de);

	Bureaucrat			&operator=(const Bureaucrat &cp);

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

std::ostream	&operator<<(std::ostream &o, Bureaucrat &var);
