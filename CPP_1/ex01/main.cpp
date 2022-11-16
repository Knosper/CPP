/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:51:15 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 14:05:39 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int		N = 10;
	Zombie	*Horde;
	int 	i = 0;

	Horde = zombieHorde(N, "Horde");
	while (i < N)
	{
		Horde[i].announce();
		i++;
	}
	delete[] Horde;
	return (0);
}
