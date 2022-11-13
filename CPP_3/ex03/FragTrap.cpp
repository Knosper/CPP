/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:21:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 04:18:38 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ClapTrap.hpp"

FragTrap::FragTrap(std::string n):ClapTrap(n)
{
	name = n;
	hit_p = 100;
	enrgie_p = 100;
	attack_d = 30;
	std::cout << "void changes name to " << name << " and transformed into a FragTrap" << std::endl;
}

FragTrap::FragTrap():ClapTrap()
{
	name = "void";
	hit_p = 100;
	enrgie_p = 100;
	attack_d = 30;
	std::cout << name << " transformed into a FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << name << ": FragTrap got downgraded" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << ": activated highfivesguys" << std::endl;
}