/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:50:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 15:45:54 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	Robot1("Calculon");
	FragTrap	Robot2("Bender");
	ScavTrap	Robot3("R2D2");

	Robot3.guardGate();
	Robot1.attack("R2D2");
	Robot3.takeDamage(0);
	Robot1.attack("Tree");
	Robot1.attack("Tree");
	Robot1.takeDamage(100);
	Robot1.beRepaired(1);
	Robot1.attack("Tree");
	Robot1.takeDamage(100);
	Robot2.highFivesGuys();
	return (0);
}
