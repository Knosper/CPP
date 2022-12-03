/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:33:27 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/03 18:47:32 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stdint.h>
#include <stdlib.h>


typedef struct s_data
{
	std::string name;
	uintptr_t	number;
}	Data;

class Serial
{
private:
	Data	*_data;
public:
	Serial();
	Serial(std::string s);
	Serial(const Serial &cp);
	~Serial();

	void	setData(std::string s);

	Data *getData()const;

	Serial &operator=(const Serial &src);
};

uintptr_t	serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

std::ostream	&operator<<(std::ostream &o, const Serial &s);