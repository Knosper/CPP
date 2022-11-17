/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:43:08 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 04:29:57 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"
# include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("A Diamond")
{
	static int count;
	count++;
	name = "Diamond";
	std::cout << name << count << ": DiamondTrap got loaded" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n): ClapTrap(n)
{
	std::cout << n << ": A DiamondTrap got loaded" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap got deinstalled" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	*this = src;
	return (*this);
}
