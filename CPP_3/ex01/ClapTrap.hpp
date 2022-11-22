/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:50:30 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/22 22:21:19 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string		name;
	unsigned int	hit_p;
	unsigned int	enrgie_p;
	unsigned int	attack_d;
public:
	ClapTrap();
	ClapTrap(std::string n);
	~ClapTrap();

	void			attack(const std::string &target);
 	void			takeDamage(unsigned int amount);
 	void			beRepaired(unsigned int amount);
};
