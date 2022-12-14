/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:50:28 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/25 01:01:01 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("default"),hit_p(10),enrgie_p(10),attack_d(0)
{
	std::cout << "ClapTrap " << name << ": is bored... Zzz" << std::endl;
}

ClapTrap::ClapTrap(std::string n):name(n),hit_p(10),enrgie_p(10),attack_d(0)
{
	std::cout << "ClapTrap " << n << ": is bored... Zzz" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp):name(cp.name),hit_p(cp.hit_p),enrgie_p(cp.enrgie_p),attack_d(0)
{
	std::cout << "copied ClapTrap " << name << ": is bored... Zzz" << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (hit_p > 0)
		std::cout << "ClapTrap " << name << ": survived and went home" << std::endl;
	else
		std::cout << "ClapTrap " << name << ": is ready for scrap" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (enrgie_p > 0 && hit_p != 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_d << " points of demage" << std::endl;
		enrgie_p--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int		tmp = hit_p;

	tmp -= amount;
	if (hit_p == 0)
		std::cout << "ClapTrap " << name << ": already broken wtf!@*#%!$" << std::endl;
	else if (tmp > 0)
	{
		std::cout << "ClapTrap " << name << ": takes demage -> " << amount << "! " << hit_p << " hp left" << std::endl;
		hit_p -= amount;
	}
	else if (tmp <= 0)
	{
		std::cout << "ClapTrap " << name << ": got broken" << amount << " and needs 2repair itsself..." << std::endl;
		hit_p = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (enrgie_p > 0)
	{
		std::cout << "ClapTrap " << name << ": is repairing itsself -->" << amount << "hp" << std::endl;
		if (hit_p == 0)
			std::cout << "ClapTrap " << name << ": is back in game!" << std::endl;
		hit_p += amount;
		enrgie_p--;
	}
	else
	{
		std::cout << "ClapTrap " << name << ": no energie points left!" << std::endl;
		if (hit_p == 0)
			std::cout << "Game over" << std::endl;
	}
}
