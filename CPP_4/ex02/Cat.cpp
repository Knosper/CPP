/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:14 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/14 14:21:33 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	ptr = new Brain;
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &c): Animal()
{
	*this = c;
	std::cout << "Cat copied" << std::endl;
}

Cat::~Cat()
{
	delete ptr;
	std::cout << "Cat deconstructed" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	*this = src;
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << "type=" << this->type << ": miau" << std::endl;
}