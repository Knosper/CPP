/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:50:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/25 01:00:27 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Robot("Calculon");

	Robot.attack("Tree");
	Robot.attack("Tree");
	Robot.takeDamage(100);
	Robot.beRepaired(1);
	Robot.attack("Tree");
	Robot.takeDamage(100);
	return (0);
}
