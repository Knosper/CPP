/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:16:19 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/08 23:58:33 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main()
{
	Zombie	*Z;

	Z = newZombie("Zombie A");
	Z->announce();
	randomChump("Zombie B");
	delete Z;
	return (0);
}