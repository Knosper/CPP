/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:11:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/21 13:13:53 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Bureaucrat
{
private:
    std::string     name;
    int             grade;
public:
    Bureaucrat(std::string n);
    Bureaucrat();
    ~Bureaucrat();
};