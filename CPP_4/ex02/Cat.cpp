/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:14 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 01:25:07 by jjesberg         ###   ########.fr       */
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
		ptr = new Brain();
		if (!ptr)
		{
			std::cerr << "malloc error, shut down" << std::endl;
			exit(1);
		}
		std::cout << "Cat copy operator called" << std::endl;
		*this->ptr = *src.ptr;
	}
	return (*this);
}

void	Cat::setIdea(int i, const std::string s)
{
	this->ptr->setIdea(i, s);
}

void 	Cat::getIdeas()
{
	int i = 0;
	while (i < 100 && i >= 0)
	{
		std::cout << "[" << i << "]" << type << " ideas is: " << this->ptr->getIdea(i) << std::endl;
		i++;
	}	
}

void	Cat::makeSound()const
{
	std::cout << this->type << ": miau" << std::endl;
}
