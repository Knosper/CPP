/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:28:28 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 00:00:43 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie( std::string s )
{
	this->name = s;
	std::cout << "Create " << s << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": just died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
