/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:28 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 14:48:01 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("damaged spiked club");
		bob.attack();
	}
	{
		Weapon club = Weapon("large heavy axe");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("damaged heavy shortaxe ");
		jim.attack();
	}
	return 0;
}
