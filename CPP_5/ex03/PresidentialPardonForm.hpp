/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:07:58 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 07:51:22 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

#define Presi	\
"         -----			" << std::endl << \
"        d------b		" << std::endl << \
"   ----@p~qp~~qMb---	" << std::endl << \
"       M|@||@) M|		" << std::endl << \
"       @,----.JM|		" << std::endl << \
"      JS^\\__/  qKL		" << std::endl << \
"     dZP        qKRb	" << std::endl << \
"    dZP          qKKb	" << std::endl << \
"   ZZZ            SMMb	" << std::endl << \
"   HZM            MMMM	" << std::endl << \
"   FqM     .      MMMM	" << std::endl << \
" __| .        IdSqML	" << std::endl << \
" |    `.       I `' \\Zq	" << std::endl << \
"_)      \\.___.,I     .'	" << std::endl << \
"\\____   )MMMMMPI   .'	" << std::endl << \
"     `-'       `--' hjm	" << std::endl << std::endl << \
"asciiart.eu				" << std::endl

class PresidentialPardonForm : public Form
{
private:
	std::string		_target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &cp);
	~PresidentialPardonForm();

	std::string	getTarget()const;

	virtual void 		execute(Bureaucrat const &executor) const;

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);
};
