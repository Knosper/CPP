/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/09 14:32:36 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.tpp"
# include "easyfind.hpp"

int main()
{
	std::vector< int >	vector;
		
	vector.push_back(49);
	vector.push_back(53);
	vector.push_back(55);
	vector.push_back(56);
	vector.push_back(57);
	try
	{
		easyfind<std::vector<int> >(vector, 74);
	}
	catch (NotFoundException &e)
	{
		std::cout << e.what() << std::endl;
	}
}