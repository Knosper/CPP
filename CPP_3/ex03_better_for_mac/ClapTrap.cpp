/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:50:28 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 04:03:28 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n):name(n),hit_p(10),enrgie_p(10),attack_d(0)
{

	std::cout << n << ": got constructed and is bored... Zzz [default]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
	std::cout << this->name << "2: got constructed and is bored... Zzz [copy]" << std::endl;
}

ClapTrap::ClapTrap()
{
	static int count;
	count++;
	name = "void";
	hit_p = 10;
	enrgie_p = 10;
	attack_d = 0;
	std::cout << name << count <<": got constructed and is bored... Zzz [void]" << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (hit_p > 0)
		std::cout << name << ": survived and went home" << std::endl;
	else
		std::cout << name << ": is ready for scrap" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (enrgie_p > 0 && hit_p != 0)
	{
		std::cout << name << ": attacks " << target << " with " << attack_d << " attack demage" << std::endl;
		enrgie_p--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int		tmp = hit_p;

	tmp -= amount;
	if (hit_p == 0)
		std::cout << name << ": already broken wtf!@*#%!$" << std::endl;
	else if (tmp > 0)
	{
		std::cout << name << ": takes demage -> " << amount << "! " << hit_p << " hp left" << std::endl;
		hit_p -= amount;
	}
	else if (tmp <= 0)
	{
		std::cout << name << ": take demage -> " << amount << " and died..." << std::endl;
		hit_p = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (enrgie_p > 0)
	{
		
		std::cout << name << ": is repairing hisself -->" << amount << "hp" << std::endl;
		if (hit_p == 0)
			std::cout << name << ": is back in game!" << std::endl;
		hit_p++;
		enrgie_p--;
	}
	else
	{
		std::cout << name << ": no energie points left!" << std::endl;
		if (hit_p == 0)
			std::cout << "Game over" << std::endl;
	}
}