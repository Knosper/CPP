/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:40:08 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/10 14:43:50 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					f_point;
	static const int	f_bits = 8;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	~Fixed();
	int		toInt( void ) const;
	float	toFloat( void ) const;
	Fixed	&operator=(const Fixed &f);
	int		getRawBits(void) const;
	void	getRawBits(int const raw);

};
