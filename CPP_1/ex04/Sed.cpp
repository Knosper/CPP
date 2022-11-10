/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:40:40 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/10 23:52:41 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed()
{
	std::cout << "SED started" << std::endl;
}

Sed::~Sed()
{
	std::cout << "SED done" << std::endl;
}

int	Sed::start_sed(char **args)
{
	char			c;
	const std::string filename = args[1];

	file1.open(args[1]);
	file2.open(filename + ".replace", std::ios::out);
	if (file1.fail() || file2.fail())
	{
		std::cout << "file error" << std::endl;
		return (1);
	}
	while (file1.get(c))
	{
		// Wenn s1 identified ersetZe mit s2! jedes wort checken bis space or \0 ...
		file2 << c;
	}
	if (file1.eof())
		std::cout << "content copied" << std::endl;
	file1.close();
	file2.close();
	return (0);
}
