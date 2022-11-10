/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:40:04 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/10 14:43:20 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(): f_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->f_point = n << this->f_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	int res;
	int f1 = roundf(this->f_bits);
	int f2 = roundf(f);

	res = f2 << f1;
	this->f_point = res;
}

Fixed::~Fixed()
{
	std::cout << "ended" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	float n1;

	n1 = (float)(1 << this->f_bits);
	return ((float)this->f_point / n1);
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this->f_point != f.f_point)
		this->f_point = f.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->f_point);
}

void	Fixed::getRawBits(int const raw)
{
	std::cout << "getRawBits member function called:" << std::endl;
	this->f_point = raw;
}

int	Fixed::toInt( void ) const
{
	float n1;

	n1 = (float)(1 << this->f_bits);
	return ((int)roundf(this->f_point / n1));
}

std::ostream	&operator<<(std::ostream &s, const Fixed &f)
{
	s << f.toFloat();
	return (s);
}