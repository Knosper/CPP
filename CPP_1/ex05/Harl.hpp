/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:43:51 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 18:04:17 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

class Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public:
	Harl();
	~Harl();
	void complain( std::string level );
};
