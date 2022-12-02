/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:55:29 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 01:17:06 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain started" << std::endl;
}

Brain::Brain(const Brain &cp)
{
	std::cout << "copy Brain constructor" << std::endl;
	*this = cp;
}

Brain::~Brain()
{
	std::cout << "Brain closed" << std::endl;
}

void	Brain::setIdea(int i, const std::string s)
{
	if (i < 100 && i >= 0)
		this->ideas[i] = s;
	else
		std::cout << "There is only space for 0-99 ideas!" << std::endl;
}

const std::string	Brain::getIdea(int i)const
{
	if (i < 100 && i >= 0)
		return (ideas[i]);
	else
		return ("There are only 0-99 ideas!");
}

Brain	&Brain::operator=(const Brain &src)
{
	int i = 0;
	if (this != &src)
	{
		while (i < 100)
		{
			this->ideas[i].assign(src.ideas[i]);
			i++;
		}
		std::cout << "Brain copy operator called" << std::endl;
	}
	return (*this);
}