/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:40:58 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/12 15:32:14 by jjesberg         ###   ########.fr       */
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

bool	Fixed::operator<(Fixed f)
{
	if (this->toFloat() < f.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator>(Fixed f)
{
	if (this->toFloat() > f.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator>=( Fixed f )
{
	if (this->toFloat() >= f.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<=( Fixed f )
{
	if (this->toFloat() <= f.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator!=( Fixed f )
{
	if (this->toFloat() != f.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator==( Fixed f )
{
	if (this->toFloat() == f.toFloat())
		return (1);
	return (0);
}

float	Fixed::operator*( Fixed f )
{
	return (this->toFloat() * f.toFloat());
}

float	Fixed::operator/( Fixed f )
{
	return (this->toFloat() / f.toFloat());
}

float	Fixed::operator+( Fixed f )
{
	return (f.toFloat() + this->toFloat());
}

float	Fixed::operator-( Fixed f )
{
	return (f.toFloat() - this->toFloat());
}

Fixed	Fixed::operator++()
{
	Fixed	ret = *this;
	this->f_point++;
	return (ret);
}

Fixed	Fixed::operator--()
{
	Fixed	ret = *this;
	this->f_point--;
	return (ret);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret = *this;
	++this->f_point;
	return (ret);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret = *this;
	--this->f_point;
	return (ret);
}

Fixed	&Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	else
		return (n2);
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	else
		return (n2);	
}

Fixed const	&Fixed::min(Fixed const &n1, Fixed const &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	else
		return (n2);
}

Fixed const	&Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	else
		return (n2);	
}

float 	Fixed::toFloat( void )const
{
	return (this->f_point>> this->f_bits);
}

int 	Fixed::toInt( void )const
{
	return (this->f_point);
}
