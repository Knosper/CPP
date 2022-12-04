/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:49:42 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/04 03:14:33 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

template< typename T >
Array<T>::Array():_array(NULL),_len(0)
{
	std::cout << "empty Array constructed" << std::endl;
}
/*
template< typename T >
Array<T>::Array(unsigned int u):_array(new Array<T>[u]),_len(u)
{
	std::cout << "Array constructed with sizeof: " << u << std::endl;
}

template< typename T >
Array<T>::Array(const Array &cp)
{
	std::cout << "Array copied" << std::endl;
	*this = cp;
}



template< typename T >
Array<T>	&Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		_array = new T[size];
		unsigned int i = 0;
		while (i < size)
		{
			_array[i] = src._array[i];
			i++;
		}
	}
	return (*this);
}

template< typename T >
unsigned int	&Array<T>::size()const
{
	return (_len);
}*/
template< typename T >
Array<T>::~Array()
{
	std::cout << "Array destructed" << std::endl;
}