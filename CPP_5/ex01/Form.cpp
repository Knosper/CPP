/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 16:26:11 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form():_name("default"),_exec_grade(150),_sign_grade(0)
{
	std::cout << _name << ": grade[" << _exec_grade << "] constructed" << std::endl;
}

Form::~Form()
{
	std::cout << _name << ": grade[" << _sign_grade << "] destructed" << std::endl;
}

const std::string	Form::getName(void)const
{
	return (this->_name);
}

bool	Form::getFlag(void)const
{
	return (this->_flag);
}

const int	Form::getSign(void)const
{
	return (this->_sign_grade);
}

const int	Form::getGrade(void)const
{
	return (this->_exec_grade);	
}