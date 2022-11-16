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
	std::cout << "type = " << type << "| Animal constructed" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "type = " << type << "| Animal copied" << std::endl;
}

Animal::~Animal()
{
	std::cout << "type = " << type << "| Animal destructed" << std::endl;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal assign operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void	Animal::makeSound()const{}

std::string	Animal::getType()const
{
	return (type);
}
