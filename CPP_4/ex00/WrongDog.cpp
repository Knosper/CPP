/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:38:17 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 17:51:49 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongDog.hpp"

WrongDog::WrongDog(): Animal()
{
	type = "Fake Dog";
	std::cout << "WrongDog constructed" << std::endl;
}

WrongDog::WrongDog(const WrongDog &c): Animal()
{
	*this = c;
	std::cout << "WrongDog copied" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog deconstructed" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &src)
{
	*this = src;
	return (*this);
}

void	WrongDog::makeSound()const
{
	std::cout << "Fake Dog WOOF" << std::endl;
}
