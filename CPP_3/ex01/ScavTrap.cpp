/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:16:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 22:32:45 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	name = "default";
	hit_p = 100;
	enrgie_p = 50;
	attack_d = 20;
	guard_gate = false;
	std::cout << "ScavTrap " << name << " got loaded" << std::endl;
}

ScavTrap::ScavTrap(std::string n):ClapTrap(n)
{
	name = n;
	hit_p = 100;
	enrgie_p = 50;
	attack_d = 20;
	guard_gate = false;
	std::cout << "ScavTrap " << name << " got loaded" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj):ClapTrap(obj)
{
	*this = obj;
	std::cout << "ScavTrap " << name << ": got loaded" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << ": shut down" << std::endl;
}

void	ScavTrap::guardGate()
{
	guard_gate = true;
	std::cout << "ScavTrap " << name << ": activates Gate keeper Mode!" << std::endl;
}
