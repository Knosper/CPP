/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:48:04 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/06 01:02:15 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
#include <stdlib.h>
# include <limits.h>

template<typename T>
class Array
{
private:
	unsigned int 	_len;
	T				*_array;
public:
	Array();
	Array(unsigned int u);
	Array(const Array<T> &cp);

	~Array();
	
	Array		&operator=(const Array<T> &src);
	const T		&operator[](int index);

	//setter
	void	setArray(int index, T data);
	//getter
	unsigned int	size();
	//mystuff
	void	InitArray(void);
	void	PrintArray(void);
	//exceptions
	class SizeTooHighException : public std::exception
	{
    	public:
			virtual const char * what ();
	};
	class IndexRangeException : public std::exception
	{
    	public:
			virtual const char * what ();
	};
};
