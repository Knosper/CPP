/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:55 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/12 15:32:32 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed():f_point(0)
{
	std::cout << "Default contsructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->f_point = roundf(f * (1 << this->f_bits));
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->f_point = n << this->f_bits;
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
	return (this->f_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->f_point = raw;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		this->f_point = f.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

float 	Fixed::toFloat( void )const
{
	return (this->f_point>> this->f_bits);
}

int 	Fixed::toInt( void )const
{
	return (this->f_point);
}
