/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:49:42 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/06 01:11:02 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

//construct & deconstruct
template< typename T >
Array<T>::Array():_len(0),_array(NULL)
{
	std::cout << "default Array constructed" << std::endl;
}

template< typename T >
Array<T>::Array(unsigned int u):_len(u)
{
	try
	{
		InitArray();
	}
	catch(SizeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (_array)
		std::cout << "Array[" << _len << "] constructed" << std::endl;
	else
		std::cout << "Array broken" << std::endl;
}

template< typename T >
Array<T>::Array(const Array &cp)
{
	*this = cp;
	std::cout << "Array[" << _len << "] copied" << std::endl;
}

template< typename T >
Array<T>::~Array()
{
	if (!_array)
		_len = 0;
	else
		delete[] _array;
	std::cout << "Array[" << _len << "] destructed" << std::endl;
}

//operators
template< typename T >
Array<T>	&Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		unsigned int i = 0;
		if (_array != NULL)
			delete [] _array;
		std::cout << "Array copy operator called" << std::endl;
		_len = src._len;
		_array = new T[_len];
		while (i < _len)
		{
			_array[i] = src._array[i];
			i++;
		}
	}
	return (*this);
}

template< typename T >
const T	&Array<T>::operator[](int index)
{
	if (index < 0 || static_cast<unsigned int>(index) > _len || !_array)
	{
		throw (Array<T>::IndexRangeException());
	}
	return(_array[index]);
}

//setter
template< typename T >
void	Array<T>::InitArray(void)
{
	if (_len >= 750)
	{
		_array = NULL;
		throw (Array<T>::SizeTooHighException());
	}
	else
	{
		_array = new T[_len];
		unsigned int i = 0;
		while (i < _len)
		{
			if (i % 2)
				setArray(i++,48);
			else
				setArray(i++,95);
		}
	}
}

template< typename T >
void	Array<T>::setArray(int index, T data)
{
	if (index >= 750 || index < 0 || static_cast<unsigned int>(index) > _len || !_array)
	{
		throw (Array<T>::IndexRangeException());
	}
	else
		_array[index] = data;
}

//getter
template< typename T >
unsigned int	Array<T>::size()
{
	return (_len);
}

template< typename T >
void	Array<T>::PrintArray(void)
{
	if (!_array)
		return ;
	unsigned int i = 0;
	while (i < _len)
		std::cout << _array[i++];
	std::cout << std::endl;
}

//Exception
template< typename T >
const char	*Array<T>::SizeTooHighException::what()
{
	return ("Size too high![Array]");
}

template< typename T >
const char	*Array<T>::IndexRangeException::what()
{
	return ("Index outside range![Array]");
}
