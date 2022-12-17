/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/15 03:44:42 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
# include "Array.tpp"


int main() 
{
	Array<int> A(70);
	Array<int>	B(A);
	try
	{
		B.setArray(10, 33);
	}
	catch(Array<int>::IndexRangeException &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Test for [] = " << B[10] << std::endl; 
	}
	catch(Array<int>::IndexRangeException &e)
	{
		std::cerr << e.what() << '\n';
	}
	A.PrintArray();
	B.PrintArray();

	std::cout << "Arraysize = " << B.size() << std::endl;
	int	*a = new int;
	*a = 102;
	std::cout << *a << std::endl;
	return 0;
}