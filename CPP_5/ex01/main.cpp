/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/23 23:13:52 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main()
{
	Form	Iso;
	Bureaucrat A(2);

	try
	{
		Iso.beSigned(A);
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Iso << std::endl;
	Iso.signForm(A);
	return (0);
}
