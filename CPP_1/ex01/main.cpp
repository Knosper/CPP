/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:51:15 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 00:32:34 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*Horde;
	int		N = 0;
	int 	i = 0;

	Horde = zombieHorde(N, "Horde!");
	while (i < N)
		Horde->announce(Horde[i++]);
	delete[] Horde;
	return (0);
}
