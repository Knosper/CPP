/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:23 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 15:02:53 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"
# include "Weapon.hpp"

HumanB::HumanB(const std::string name)
{
	this->name_b = name;
	this->weapon_b = NULL;
	std::cout << this->name_b << " is rdy2fight!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name_b << " got killed " << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon_b = &w;
	std::cout << this->name_b << " took the fresh " << this->weapon_b->getType() << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->name_b << " attacks with their " << this->weapon_b->getType() << std::endl;
}