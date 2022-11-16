/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:51:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 14:07:19 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": Zombie deconstructed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiinzzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
	std::cout << "Zombie name: " << name << std::endl;
}
