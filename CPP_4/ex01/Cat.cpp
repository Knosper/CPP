/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:14 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/29 00:04:40 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Brain.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	ptr = new Brain();
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &c): Animal()
{
	*this = c;
	std::cout << "Cat copied" << std::endl;
}

Cat::~Cat()
{
	delete (ptr);
	std::cout << "Cat destructed" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		type = src.getType();
		ptr = src.ptr;
		std::cout << "Cat copy operator called" << std::endl;
	}
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << this->type << ": miau" << std::endl;
}
