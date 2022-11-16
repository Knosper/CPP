/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:55 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 14:24:25 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed():f_point(0)
{
	std::cout << "Default contsructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp)
{
	*this = cp;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->f_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called:" << std::endl;
	this->f_point = raw;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Fixed assignment operator called" << std::endl;
	if (this != &f)
		this->f_point = f.getRawBits();
	return (*this);
}
