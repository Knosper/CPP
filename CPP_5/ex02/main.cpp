/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/24 19:04:43 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main()
{
	
	/*try
	{
		Form	Iso0("ds",1,65);
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}*/
	Form	Iso0("ds",150, 150);
	Bureaucrat A("Hannes");
	A.signForm(Iso0);
	Form 	Iso1;
	try
	{
		Form	Iso2(1222);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	A.signForm(Iso1);
	std::cout << Iso1 << std::endl;

	return (0);
}
