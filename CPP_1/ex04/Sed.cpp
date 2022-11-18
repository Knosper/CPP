/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:40:40 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/18 13:22:44 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(char **args)
{
	std::cout << "SED started" << std::endl;
	this->args = args;
}

Sed::~Sed()
{
	std::cout << "SED done" << std::endl;
}

void	Sed::check_text(const std::string filename)
{
	char	c;

	lines = 0;
	file1.open(filename.c_str());
	if (file1.fail())
	{
		std::cout << "file1 error" << std::endl;
	}
	else
	{
		while (file1.get(c))
		{
			if (c == '\n')
				this->lines++;
		}
		file1.close();
	}
}

std::string	Sed::occurrence(std::string save, std::string s1, std::string s2)
{
	int			pos = -1;

	pos = save.find(s1, 0);
	while (pos != -1)
	{
		save.erase(pos, s1.length());
		save.insert(pos, s2);
		pos = save.find(s1, pos + s2.length());
	}
	if (this->lines > 0)
	{
		save.insert(save.length(), "\n");
		lines--;
	}
	return (save);
}

int	Sed::check_line()
{
	std::string		save;

	while (std::getline(this->file1, save))
	{
		save = occurrence(save, s1, s2);
		file2 << save;
		save.clear();
	}
	if (file1.eof())
		return (0);
	else
		return (1);
}

int	Sed::start_sed(char **args)
{
	const std::string 	filename = args[1];

	check_text(filename);
	this->s1.insert(0, args[2]);
	this->s2.insert(0, args[3]);
	strcat(args[1], ".replace");
	file1.open(filename.c_str());
	if (file1.fail())
	{
		std::cout << "file1 error" << std::endl;
		return (1);
	}
	file2.open(args[1], std::ios::out);
	if (file2.fail())
	{
		std::cout << "file2 error" << std::endl;
		return (1);
	}
	Sed::check_line();
	file1.close();
	file2.close();
	return (0);
}

int		Sed::check_arg(char **args)
{
	int	i = 0;
	std::string	tmp;

	while (i < 4)
	{
		tmp = std::string(args[i]);
		if (tmp.length() == 0)
			return (1);
		i++;
	}
	return (0);
}