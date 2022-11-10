/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/10 13:36:47 by jjesberg         ###   ########.fr       */
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
	~Fixed();
	Fixed	&operator=(const Fixed &f);
	int		getRawBits(void) const;
	void	getRawBits(int const raw);
};
