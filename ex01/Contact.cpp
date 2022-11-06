/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:06 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/06 20:22:02 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void	Contact::set_data(int round, std::string save)
{
	if (round == 0)
	{
		std::cout << "Enter first name" << std::endl;
		while (std::getline(std::cin, save))
		{
			this->f_name = save;
			if (save != "")
				return ;
			else
				std::cout << "Enter first name" << std::endl;
		}
	}
	else if (round == 1)
	{
		std::cout << "Enter last name" << std::endl;
		while (std::getline(std::cin, save))
		{
			this->l_name = save;
			if (save != "")
				return ;
			else
				std::cout << "Enter last name" << std::endl;
		}
	}
	else if (round == 2)
	{
		std::cout << "Enter nick name" << std::endl;
		while (std::getline(std::cin, save))
		{
			this->n_name = save;
			if (save != "")
				return ;
			else
				std::cout << "Enter nick name" << std::endl;
		}
	}
	else if (round == 3)
	{
		std::cout << "Enter phone number" << std::endl;
		while (std::getline(std::cin, save))
		{
			this->nb = save;
			if (save != "")
				return ;
			else
				std::cout << "Enter phone number" << std::endl;
		}
	}
	else if (round == 4)
	{
		std::cout << "Enter dark secret" << std::endl;
		while (std::getline(std::cin, save))
		{
			this->secret = save;
			if (save != "")
				return ;
			else
				std::cout << "Enter dark secret" << std::endl;
		}
	}
}

std::string	Contact::get_data(int round)
{
	if (round == 0)
		return (this->f_name);
	else if (round == 1)
		return (this->l_name);
	else if (round == 2)
		return (this->n_name);
	else if (round == 3)
		return (this->nb);
	else if (round == 4)
		return (this->secret);
	return ("");
}

void	Contact::print_contact(int round)
{
	std::string		data;
	const char		*tmp;
	size_t			len;
	size_t			diff;

	data = get_data(round);
	tmp = data.c_str();
	len = strlen(tmp);
	diff = 10 - len;
	if (len == 10)
		std::cout << data << "|";
	else if (len > 10)
		std::cout << std::string(data.begin(), data.begin() + 9) << ".";
	else if (len < 10)
	{
		std::cout << data;
		while (diff > 0)
		{
			diff--;
			std::cout << " ";
		}
	}
	std::cout << "|";
	if (round == 2)
		std::cout << std::endl;
}

void	Contact::print_all(void)
{
	std::cout << LIMIT << std::endl;
	std::cout << "first name = " << this->f_name << std::endl;
	std::cout << "last name = " << this->l_name << std::endl;
	std::cout << "nick name = " << this->n_name << std::endl;
	std::cout << "phone number = " << this->nb << std::endl;
	std::cout << "dark secret = " << this->f_name << std::endl;
	std::cout << LIMIT << std::endl;
}
