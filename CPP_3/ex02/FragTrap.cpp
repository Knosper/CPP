/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:21:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 15:43:58 by jjesberg         ###   ########.fr       */
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
	std::cout << "FragTrap " << name << ": got consructed" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << ": destructed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << ": activated highfivesguys" << std::endl;
}