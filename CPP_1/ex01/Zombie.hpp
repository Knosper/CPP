/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:51:35 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 00:13:01 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	//Zombie();
	//~Zombie();
	void	set_name(std::string name);
	void	announce(Zombie Z);
};

Zombie* zombieHorde( int N, std::string name );

#endif
