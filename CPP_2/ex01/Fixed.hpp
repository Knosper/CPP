/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/10 21:44:44 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

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
	int		getRawBits( void ) const;
	void	getRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);