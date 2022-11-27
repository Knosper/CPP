/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:23 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 05:48:42 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"

#define Robot	\
"            .-----." << std::endl << \
"           '       \\" << std::endl << \
"          I,.  ,-.  I" << std::endl << \
"          I()L( ()I I" << std::endl << \
"          I,'  ``.I I" << std::endl << \
"          I.___.',I `" << std::endl << \
"         .j `--'' `  `." << std::endl << \
"        / '        '   \\" << std::endl << \
"       / /          `   `." << std::endl << \
"      / /            `    ." << std::endl << \
"     / /              l   I" << std::endl << \
"    . ,               I   I" << std::endl << \
"    ,-`.             .I   I" << std::endl << \
" _.'   ``.          I `..-'l" << std::endl << \
"I       `.`,        I      `." << std::endl << \
"I         `.    __.j         )" << std::endl << \
"I__        I--II___I      ,-'" << std::endl << \
"   `u--...,+""""   `._,.-,--`°" << std::endl << std::endl << \
"asciiart.eu				" << std::endl

class RobotomyRequest : public Form
{
private:
	std::string		_target;
	RobotomyRequest();
public:
	RobotomyRequest(std::string target);
	RobotomyRequest(const RobotomyRequest &cp);
	~RobotomyRequest();

	std::string				getTarget()const;
	virtual void			execute(const Bureaucrat &executor)const;

	RobotomyRequest	&operator=(const RobotomyRequest &src);
	
};