/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/10 00:52:45 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PreasidentialPardonForm.hpp"

int	main()
{
	Bureaucrat B("Hannes", 5);
	Bureaucrat F;
	PreasidentialPardonForm A("d");
	ShrubberyCreation C("d");
	ShrubberyCreation D = C;

	B.signForm(A);
	B.executeForm(A);
	B.signForm(D);
	B.executeForm(C);
	F.executeForm(A);
	return (0);
}
