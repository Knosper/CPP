/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:35:46 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 00:51:32 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "The memory address of s = " << &s << std::endl;
	std::cout << "The memory address of stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address of stringREF = " << &stringREF << std::endl << std::endl;

	std::cout << "The value of s = " << s << std::endl;
	std::cout << "The value of stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value of stringREF = " << stringREF << std::endl;
	return (0);
}