/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:20:49 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/23 00:39:23 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	bool	high_five;
public:
	FragTrap(std::string n);
	FragTrap(FragTrap const &obj);
	FragTrap();
	~FragTrap();
	void	highFivesGuys(void);
};
