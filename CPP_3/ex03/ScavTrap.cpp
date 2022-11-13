/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:16:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 04:13:00 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	h_points = 100;
	energie_p = 50;
	attack_d = 20;
	name = "void";
	std::cout << "A void got upgraded to ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string n):ClapTrap(n)
{
	h_points = 100;
	energie_p = 50;
	attack_d = 20;
	name = n;
	std::cout << n << ": got copied to ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj):ClapTrap(obj)
{
	*this = obj;
	std::cout << name << ": got loaded as ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << ": ScavTrap shut down" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << name << ": activates Gate keeper Mode!" << std::endl;
}