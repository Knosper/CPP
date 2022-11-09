/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:09 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/06 20:21:20 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook started" << std::endl << "----------------" << std::endl;
	this->space = 0;
}

//dont work atm
PhoneBook::~PhoneBook(void)
{
	std::cout << "quit PhoneBook" << std::endl << "----------------";
}

void	PhoneBook::add_c(void)
{
	std::string	save;
	static int	oldest;
	int			i;

	i = 0;
	if (this->space == 8)
	{
		std::cout << "space full, overwrite data with index:[" << oldest << "]" << std::endl;
		while (i < 6)
		{
			this->contacts[oldest].set_data(i, save);
			i++;
		}
		oldest++;
		if (oldest == 8)
			oldest = 0;
		return ;
	}
	while (i < 6)
	{
		this->contacts[this->space].set_data(i, save);
		i++;
	}
	this->space++;
}

void	PhoneBook::search_c(void)
{
	std::string		save;
	int				index;
	int				i;

	i = 0;
	index = 0;
	std::cout << LIMIT << std::endl;
	std::cout << LIST << std::endl;
	while (index < this->space)
	{
		std::cout << LIMIT << std::endl;
		std::cout << index << "    |";
		while (i < 3)
			this->contacts[index].print_contact(i++);
		index++;
		i = 0;
	}
	std::cout << LIMIT << std::endl;
	while (index > this->space - 1)
	{
		std::cout << "Enter index \nor leave empty to return" << std::endl;
		std::getline(std::cin, save);
		if (save.compare("") == 0)
			return ;
		index = atoi(save.c_str());
	}
	this->contacts[index].print_all();
}
