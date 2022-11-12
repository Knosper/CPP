/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:40:22 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/12 15:42:14 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					f_point;
	static const int	f_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &cp);
	Fixed(const int n);
	Fixed(const float f);
	~Fixed();
	Fixed	&operator=( const Fixed &f );
	bool	operator>( Fixed f );
	bool	operator<( Fixed f );
	bool	operator>=( Fixed f );
	bool	operator<=( Fixed f );
	bool	operator!=( Fixed f );
	bool	operator==( Fixed f );
	
	float	operator*( Fixed f );
	float	operator/( Fixed f );
	float	operator+( Fixed f );
	float	operator-( Fixed f );

	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
	
	static Fixed		&min(Fixed &n1, Fixed &n2);
	static const Fixed	&min(Fixed const &n1, Fixed const &n2);
	static Fixed		&max(Fixed &n1, Fixed &n2);
	static const Fixed	&max(Fixed const &n1, Fixed const &n2);
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);