/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 14:14:39 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon_a(weapon)
{
	this->name_a = name;
	std::cout << this->name_a << " choosed the " << this->weapon_a.getType() << " and is rdy2fight!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name_a << " just died " << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name_a << " attacks with their " << this->weapon_a.getType() << std::endl;
}
