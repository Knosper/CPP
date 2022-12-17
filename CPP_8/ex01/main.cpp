/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/17 19:52:55 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main() 
{
	/*Span sp = Span(10000);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span b(sp);
	sp.fillSpan(30000);
	std::cout << "b = " << b << std::endl;
	b.fillSpan(20000);
	std::cout << "sp = " << sp << std::endl;
	std::cout << "b = " << b << std::endl;
	return 0;*/

	/*Span sp(600);
	sp.addNumber(9999999);
	sp.fillSpan();
	std::cout << sp << std::endl;
	try
	{
		std::cout << "longest = " << sp.longestSpan() << std::endl;
	}
	catch(Span::ListEmptyException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Span::NoSpanPossible &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest = " << sp.shortestSpan() << std::endl;
	}
	catch(Span::ListEmptyException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Span::NoSpanPossible &e)
	{
		std::cerr << e.what() << std::endl;
	}
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
	std::cout << sp.longestSpan() << std::endl;
	return 0;*/
}