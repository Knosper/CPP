/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:16:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 15:33:15 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	name = "deafult";
	h_points = 100;
	energie_p = 50;
	attack_d = 20;
	std::cout << "ScavTrap " << name << "ScavTrap got loaded" << std::endl;
}

ScavTrap::ScavTrap(std::string n):ClapTrap(n)
{
	name = n;
	h_points = 100;
	energie_p = 50;
	attack_d = 20;
	std::cout << "ScavTrap " << name << ": copied" << std::endl;
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
	std::cout << "ScavTrap " << name << ": activates Gate keeper Mode!" << std::endl;
}
