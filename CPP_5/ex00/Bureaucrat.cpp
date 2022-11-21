/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:11:14 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/21 13:15:40 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n):name(n)
{
    std::cout << "Bureaucrat [" << name << "]: constructed" << std::endl;
}

Bureaucrat::Bureaucrat()
{
    name = "default";
    std::cout << "Bureaucrat [" << name << "]: constructed" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat [" << name << "]: destructed" << std::endl;
}
