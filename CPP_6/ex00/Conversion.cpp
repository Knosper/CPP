/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 01:34:46 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

Conversion::Conversion()
{
	fill_data("");
	std::cout << "Conversation created, data = 0" << std::endl;
}

Conversion::~Conversion()
{
	std::cout << "Conversation closed" << std::endl;
}

void	Conversion::fill_data(const std::string src)
{
	_integer = std::atoi(src.c_str());
	if (src.length() <= 1)
		_character = src[0];
	else
	{
		_character = 0;
		std::cout << "too big for char" << std::endl;
	}
	_f_n = std::strtof(src.c_str(), NULL);
}

int	Conversion::getInt() const
{
	return (_integer);
}

char	Conversion::getChar() const
{
	return (_character);
}

float	Conversion::getFloat() const
{
	return (_f_n);
}