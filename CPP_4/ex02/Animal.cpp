/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:11:41 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 16:14:16 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal():type("general")
{
	std::cout << "Animal constructed, as " << type << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Animal copied, as " << type << std::endl;
}

Animal::~Animal()
{
	std::cout << type << " Animal destructed " << std::endl;
}

Animal	&Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		type = src.getType();
		std::cout << "Animal copy operator called" << std::endl;
	}
	return (*this);
}

void	Animal::makeSound()const
{
	std::cout << "cant make noises, but type is: " << getType() << std::endl;
}

std::string	Animal::getType()const
{
	return (type);
}
