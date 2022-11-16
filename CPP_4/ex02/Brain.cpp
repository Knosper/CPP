/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:55:29 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 16:42:04 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain started" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain closed" << std::endl;
}

Brain	&Brain::operator=(const Brain &c)
{
	int	i = 0;
	if (this != &c)
	{
		while (i < 100)
		{
			this->ideas[i] = c.ideas[i];
			i++;
		}
	}
	return (*this);
}

const std::string Brain::getIdea(size_t i)const
{
	if (i >= 100)
		return (NULL);
	return (ideas[i]);
}

const std::string *Brain::getIdeaAddress(size_t i)const
{
	if (i >= 100)
		return (NULL);
	return (&ideas[i]);
}
	
void Brain::setIdea(size_t i, std::string src)
{
	if (i < 100)
		ideas[i] = src;
}
