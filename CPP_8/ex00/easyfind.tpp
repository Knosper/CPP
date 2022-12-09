/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:35:11 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/09 14:24:17 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "easyfind.hpp"

template<typename T>
void	easyfind(T &data, int n)
{
	typename T::const_iterator	i;
	i = find(data.begin(), data.end(), n);
	if (i == data.end())
		throw (NotFoundException());
	std::cout << "found element." << std::endl;
}
