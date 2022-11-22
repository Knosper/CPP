/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:15:43 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 15:55:57 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
    Bureaucrat  first("Hannes");
   	Bureaucrat  sec;
    Bureaucrat  fourth = first;
    Bureaucrat  third(fourth);
    Bureaucrat  five(12);
    Bureaucrat  six("Peter", 2);

	try
	{
		first.setGrade(149);
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	fourth.incrementGrade(100);
	first.incrementGrade(12);
	six.incrementGrade(1000);

	std::cout << first << std::endl;
	std::cout << sec << std::endl;
	std::cout << third << std::endl;
	std::cout << fourth << std::endl;
	std::cout << five << std::endl;
	std::cout << six << std::endl;

    return (0);
}
