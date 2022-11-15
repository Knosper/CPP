/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:55:29 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/14 16:29:11 by jjesberg         ###   ########.fr       */
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
	*this = c;
	return (*this);
}

const std::string Brain::getIdea(size_t i)const
{
	return (ideas[i]);
}

const std::string *Brain::getIdeaAddress(size_t i)const
{
	return (&ideas[i]);
}
	
void Brain::setIdea(size_t i, std::string src)
{
	if (i < 100)
		ideas[i] = src;
}