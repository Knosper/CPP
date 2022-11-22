/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:15:46 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 22:24:44 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool	guard_gate;
public:
	ScavTrap();
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &obj);
	virtual ~ScavTrap();
	void guardGate();
};
