/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:15:46 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/12 17:57:36 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string		name;
	unsigned int	h_points;
	unsigned int	energie_p;
	unsigned int	attack_d;
public:
	ScavTrap();
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();
	void guardGate();
};
