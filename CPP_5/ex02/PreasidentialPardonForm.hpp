/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PreasidentialPardonForm.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:07:58 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 05:45:35 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

#define Preasi	\
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

class PreasidentialPardonForm : public Form
{
private:
	std::string		_target;
	PreasidentialPardonForm();
public:
	PreasidentialPardonForm(std::string target);
	PreasidentialPardonForm(const PreasidentialPardonForm &cp);
	~PreasidentialPardonForm();

	std::string	getTarget()const;

	virtual void 		execute(Bureaucrat const &executor) const;

	PreasidentialPardonForm	&operator=(const PreasidentialPardonForm &src);
};
