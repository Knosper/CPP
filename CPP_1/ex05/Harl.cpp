/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:49:07 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/18 16:29:46 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl started" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl ended" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void    (Harl::*ptr[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		tmp = level.length();
	
	switch (tmp)
	{
		case (4):
		{
			(this->*ptr[1])();
			return ;
		}
		case (7):
		{
			(this->*ptr[2])();
			return ;
		}
		case (5):
		{
			tmp = level.find('E');
			switch(tmp)
			{
				case (0):
					(this->*ptr[3])();
				case (1):
					(this->*ptr[0])();
			}
			return ;
		}
	}
}
