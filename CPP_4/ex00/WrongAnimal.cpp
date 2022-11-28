/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:38:17 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 19:28:21 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("general")
{
	std::cout << "WrongAnimal constructed as " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
	*this = c;
	std::cout << "WrongAnimal copied as " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed" << std::endl;
}

std::string		WrongAnimal::getType()const
{
	return (type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
	{
		type = src.getType();
		std::cout << "WrongAnimal copy operator called" << std::endl;
	}
	return (*this);
}

void	WrongAnimal::makeSound()const
{
	std::cout << type << ": cant make noises" << std::endl;
}
