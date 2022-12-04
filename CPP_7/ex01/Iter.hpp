/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:59:15 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/04 02:44:26 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <string>
# include <iostream>

template<typename I>

void	Iter(I *array, size_t const len, void(*f)(I &))
{
	if (array)
	{
		size_t i = 0;
		while (i < len)
		{
			f(array[i++]);
		}
	}
}

template<typename I>
void	ft_write(I const c)
{
	std::cout << c;
}
