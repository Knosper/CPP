/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 14:36:26 by jjesberg         ###   ########.fr       */
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
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &cp);

	~Fixed();

	Fixed	&operator=( const Fixed &f );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);