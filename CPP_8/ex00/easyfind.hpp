/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:29:38 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/09 14:32:13 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

template<typename T>
void		easyfind(T &data, int n);

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
        {
	        return ("Nothing found"); 
        }
};
