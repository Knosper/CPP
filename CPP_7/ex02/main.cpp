/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/06 01:10:03 by jjesberg         ###   ########.fr       */
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
	return 0;
}