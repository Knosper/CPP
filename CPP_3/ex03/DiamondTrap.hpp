/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:43:11 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 04:27:23 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap, public ClapTrap
{
private:
	std::string		name;
public:
	DiamondTrap(std::string n);
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &src);
};
