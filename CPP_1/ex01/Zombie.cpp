/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:51:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 00:24:53 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(Zombie Z)
{
	std::cout << Z.name << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
