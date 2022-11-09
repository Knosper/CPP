/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:34 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 13:52:07 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(const std::string &s);
	~Weapon();
	std::string	getType(void) const;
	void		setType(const std::string &t);
};

#endif