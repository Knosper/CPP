/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 01:44:21 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->weapon_a = weapon.getType();
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->name_a << "attacks with their" << this->weapon_a << std::endl;
}
