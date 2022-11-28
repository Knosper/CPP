/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:14 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 18:30:29 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &c): Animal()
{
	*this = c;
	std::cout << "Cat copied" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructed" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		type = src.getType();
		std::cout << "Cat copy operator called" << std::endl;
	}
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << this->type << ": miau" << std::endl;
}
