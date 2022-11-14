/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:37:56 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 17:52:24 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(): Animal()
{
	type = "Fake Cat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c): Animal()
{
	*this = c;
	std::cout << "WrongCat copied" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructed" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	*this = src;
	return (*this);
}

void	WrongCat::makeSound()const
{
	std::cout << "Fake CAT Wiauz" << std::endl;
}
