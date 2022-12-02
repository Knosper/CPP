/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:53 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 01:24:42 by jjesberg         ###   ########.fr       */
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
		std::cerr << "malloc error, shut down" << std::endl;
		exit(1);
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
	if (this != &src)
	{
		type = src.getType();
		ptr = new Brain();
		if (!ptr)
		{
			std::cerr << "malloc error, shut down" << std::endl;
			exit(1);
		}
		std::cout << "Dog copy operator called" << std::endl;
		*this->ptr = *src.ptr;
	}
	return (*this);
}

void	Dog::setIdea(int i, const std::string s)
{
	this->ptr->setIdea(i, s);
}

void 	Dog::getIdeas()
{
	int i = 0;
	while (i < 100 && i >= 0)
	{
		std::cout << "[" << i << "]" << type << " ideas is: " << this->ptr->getIdea(i) << std::endl;
		i++;
	}	
}

void	Dog::makeSound()const
{
	std::cout << this->type << ": woof woof" << std::endl;
}
