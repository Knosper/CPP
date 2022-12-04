/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:48:04 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/04 03:13:33 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Array.tpp"

template<typename T>
class Array
{
private:
	T				*_array;
	unsigned int 	_len;
public:
	Array();
	/*Array(unsigned int u);
	Array(const Array &cp);

	Array<T>	&operator=(const Array<T> &src);

	unsigned int	&size()const;*/
	~Array();
};
