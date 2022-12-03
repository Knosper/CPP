/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:21:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/03 01:00:17 by jjesberg         ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap &obj):ClapTrap(obj)
{
	*this = obj;
	std::cout << "FragTrap " << name << ": got copied" << std::endl;
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