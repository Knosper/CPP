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
	std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copied" << std::endl;
	*this = obj;
}

Animal::~Animal()
{
	std::cout << "Animal deconstructed" << std::endl;
}

Animal	&Animal::operator=(const Animal &src)
{
	this->type = src.type;
	return (*this);
}

void	Animal::makeSound()const{}


std::string	Animal::getType()const
{
	return (type);
}
