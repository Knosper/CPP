/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:21:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/23 00:43:04 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ClapTrap.hpp"

FragTrap::FragTrap(std::string n)
{
	name = n;
	hit_p = 100;
	enrgie_p = 100;
	attack_d = 30;
	high_five = false;
	std::cout << "FragTrap " << name << ": got consructed" << std::endl;
}

FragTrap::FragTrap()
{
	name = "default";
	hit_p = 100;
	enrgie_p = 100;
	attack_d = 30;
	high_five = false;
	std::cout << "FragTrap " << name << ": got consructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	if (this != &obj)
	{
		name = obj.name;
		hit_p = obj.hit_p;
		enrgie_p = obj.enrgie_p;
		attack_d = obj.attack_d;
		high_five = obj.high_five;
		std::cout << "FragTrap: " << name << ": got copied" << std::endl;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << ": destructed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	high_five = true;
	std::cout << "FragTrap " << name << ": activated highfivesguys" << std::endl;
}