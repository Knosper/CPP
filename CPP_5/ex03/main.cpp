/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 18:23:30 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main()
{
	/*
	Bureaucrat *Employ = new Bureaucrat();
	Intern *Boss = new Intern();

	Form *Applic = Boss->makeForm("robotomy request", "Test");

	std::cout << std::endl;

	std::cout << *Employ;
	std::cout << std::endl;
	std::cout << "b = " << *Applic;
	std::cout << std::endl;

	delete Employ;
	delete Boss;
	delete Applic;
	*/

	Bureaucrat	A(1);
	Intern 		someRandomIntern;
	Form* 		rrf;

	//rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	//rrf = someRandomIntern.makeForm("presidential pardonForm", "Fry");
	//rrf = someRandomIntern.makeForm("shrubbery creation", "Lila");
	A.signForm(*rrf);
	A.executeForm(*rrf);
	return (0);
}
