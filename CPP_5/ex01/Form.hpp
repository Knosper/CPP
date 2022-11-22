/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:00:43 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 16:25:57 by jjesberg         ###   ########.fr       */
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
	Form();
	~Form();

	//getter
	const std::string	getName(void)const;
	bool				getFlag(void)const;
	const int			getSign(void)const;
	const int			getGrade(void)const;

	//exceptions
	class GradeTooHighException : public std::exception 
	{
    	public:
			virtual const char * what () 
			{
        		return "Grade too high![Form]";
			}
	};
	class GradeTooLowException : public std::exception 
	{
    	public:
			virtual const char * what () 
			{
        		return "Grade too high![Form]";
			}
	};
};
