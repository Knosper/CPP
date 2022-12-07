/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/07 00:27:17 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>


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
		easyfind<std::vector<int> >(vector, '1');
	}
	catch (NotFoundException &e)
	{
		std::cout << e.what() << std::endl;
	}
}