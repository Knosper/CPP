/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:41 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 08:18:35 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
# include "Form.hpp"

#define Shrubbery	\
"         _nnnn_			" << std::endl << \
"        dGGGGMMb		" << std::endl << \
"       @p~qp~~qMb		" << std::endl << \
"       M|@||@) M|		" << std::endl << \
"       @,----.JM|		" << std::endl << \
"      JS^\\__/  qKL		" << std::endl << \
"     dZP        qKRb	" << std::endl << \
"    dZP          qKKb	" << std::endl << \
"   fZP            SMMb	" << std::endl << \
"   HZM            MMMM	" << std::endl << \
"   FqM     .      MMMM	" << std::endl << \
" __| .        IdSqML	" << std::endl << \
" |    `.       I `' \\Zq	" << std::endl << \
"_)      \\.___.,I     .'	" << std::endl << \
"\\____   )MMMMMPI   .'	" << std::endl << \
"     `-'       `--' hjm	" << std::endl << std::endl << \
"asciiart.eu				" << std::endl

class ShrubberyCreationForm : public Form
{
private:
	std::string		_target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &cp);
	~ShrubberyCreationForm();

	std::string		getTarget()const;
	virtual void	execute(Bureaucrat const &executor)const;

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);
};

