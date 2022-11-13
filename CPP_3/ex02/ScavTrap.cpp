/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:16:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/12 17:58:49 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	h_points = 100;
	energie_p = 50;
	attack_d = 20;
	std::cout << "ScavTrap got loaded" << std::endl;
}

ScavTrap::ScavTrap(std::string n):ClapTrap(n)
{
	h_points = 100;
	energie_p = 50;
	attack_d = 20;
	std::cout << n << ": ScavTrap got copied" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj):ClapTrap(obj)
{
	*this = obj;
	std::cout << "ScavTrap obj got loaded" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap shut down" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "activates Gate keeper Mode!" << std::endl;
}