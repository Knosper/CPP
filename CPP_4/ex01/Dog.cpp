/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:53 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/01 22:59:18 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Brain.hpp"

Dog::Dog(): Animal()
{
	type = "Dog";
	ptr = new Brain();
	if (!ptr)
	{
		std::cerr << ""
	}
	else
		std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &c): Animal()
{
	std::cout << "Dog copied" << std::endl;
	*this = c;
}

Dog::~Dog()
{
	delete (ptr);
	std::cout << "Dog destructed" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	*this = src;
	if (this != &src)
	{
		type = src.getType();
		ptr = src.ptr;
		std::cout << "Dog copy operator called" << std::endl;
	}
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << this->type << ": woof woof" << std::endl;
}
