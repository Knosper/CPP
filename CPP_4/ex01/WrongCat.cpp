/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:37:56 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 19:02:55 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c): WrongAnimal()
{
	*this = c;
	std::cout << "WrongCat copied" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructed" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
	{
		type = src.getType();
		std::cout << "WrongCat copy operator called" << std::endl;
	}
	return (*this);
}

void	WrongCat::makeSound()const
{
	std::cout << type << ": Wiauz" << std::endl;
}
