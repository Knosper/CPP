/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:52:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 00:32:00 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	i = 0;
	Zombie *Z = new Zombie[N];
	if (!Z)
	{
		std::cout << "allocation failed" << std::endl;
		return (NULL);
	}
	while (i < N)
		Z[i++].set_name(name);
	return (Z);
}
