/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:50:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 21:04:06 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	Test1("Nautilus");
	ClapTrap	Test2;

	Test1.guardGate();
	Test1.takeDamage(101);
	Test2.attack("Trees");
	return (0);
}
