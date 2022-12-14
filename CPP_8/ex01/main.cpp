/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/09 23:23:35 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main() 
{
	Span sp(1);
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
	catch(Span::NoSpanPossible &e)
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