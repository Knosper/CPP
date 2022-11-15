/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:53 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/14 16:43:24 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(): Animal()
{
	type = "Dog";
	ptr = new Brain;
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &c): Animal()
{
	*this = c;
	std::cout << "Dog copied" << std::endl;
}

Dog::~Dog()
{
	if (ptr != NULL)
		delete ptr;
	std::cout << "Dog deconstructed" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->ptr = new Brain;
		*this->ptr = *src.ptr;
	}
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << "type= " << this->type << " woof woof" << std::endl;
}

void Dog::getIdeas(void)const
{
for (int i = 0; i < 3; i++)
		std::cout << "\tIdea " << i << " of the Dog is: \"" << this->ptr->getIdea(i) << "\" at the address " << this->ptr->getIdeaAddress(i) << std::endl;
}
	
void Dog::setIdea(size_t i, std::string idea)
{
	this->ptr->setIdea(i, idea);
}
