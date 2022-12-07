/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/07 02:39:43 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main() 
{
	Span sp;
	sp.fillSpan();
	try
	{
		sp.addNumber(6);
	}
	catch(Span::ListFullException &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(Span::ListEmptyException &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp;
	//std::cout << sp.longestSpan() << std::endl;
	/*
	Span	A(99999999);

	A.fillSpan();
	std::cout << A << std::endl;
	std::cout << A.shortestSpan() << std::endl;
	std::cout << A.longestSpan() << std::endl;*/
	return 0;
}