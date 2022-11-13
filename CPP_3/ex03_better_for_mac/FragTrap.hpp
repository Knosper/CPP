/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:20:49 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 03:53:37 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string		name;
	unsigned int	hit_p;
	unsigned int	enrgie_p;
	unsigned int	attack_d;
public:
	FragTrap();
	FragTrap(std::string n);
	~FragTrap();
	void	highFivesGuys(void);
};
