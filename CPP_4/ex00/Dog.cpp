/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:53 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 18:30:49 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(): Animal()
{
	type = "Dog";
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &c): Animal()
{
	std::cout << "Dog copied" << std::endl;
	*this = c;
}

Dog::~Dog()
{
	std::cout << "Dog destructed" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	*this = src;
	if (this != &src)
	{
		type = src.getType();
		std::cout << "Dog copy operator called" << std::endl;
	}
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << this->type << ": woof woof" << std::endl;
}
