/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:35:11 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/06 22:22:54 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "easyfind.hpp"

class NotFoundException : public std::exception
{
	public:
		virtual const char *what();
};

const char *NotFoundException::what()
{
	return ("Nothing found");
}

template<typename T>
void	easyfind(T &data, int n)
{
	typename T::const_iterator	i;
	i = find(data.begin(), data.end(), n);
	if (i == data.end())
		throw (NotFoundException());
	std::cout << "found element." << std::endl;
}