/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/27 06:30:42 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreation.hpp"
# include "RobotomyRequest.hpp"
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
