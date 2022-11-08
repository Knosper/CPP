/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:09 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/08 16:11:08 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main()
{
	PhoneBook		phone_book;
	std::string		save;

	std::cout << "Enter a command:" << std::endl;
	while (std::getline(std::cin, save))
	{
		if (save.compare("ADD") == 0)
				phone_book.add_c();
		else if (save.compare("SEARCH") == 0)
			phone_book.search_c();
		else if (save.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Enter a command: ADD,SEARCH,EXIT" << std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}