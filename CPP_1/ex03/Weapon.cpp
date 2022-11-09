/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 14:50:06 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(const std::string &s)
{
	this->setType(s);
	std::cout << this->type << " got forged" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << this->type << "just broke" << std::endl;
}

std::string Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(const std::string &t)
{
	this->type = t;
}