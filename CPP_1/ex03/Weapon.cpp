/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 01:49:09 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string s)
{
	this->setType(s);
}

Weapon::~Weapon()
{
	
}

std::string Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string t)
{
	this->type = t;
}