/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:35:40 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/03 18:47:32 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serial.hpp"

Serial::Serial()
{
	std::cout << "default Serial constructed" << std::endl;
}

Serial::Serial(std::string s)
{
	std::cout << "Serial constructed, name = " << s << std::endl;
}

Serial::Serial(const Serial &cp)
{
	*this = cp;
	std::cout << "Serial copied" << std::endl;
}

Serial::~Serial()
{
	delete _data;
	std::cout << "Serial destructed" << std::endl;
}

Serial &Serial::operator=(const Serial &src)
{
	if (this != &src)
	{
		Data	*tmp;
		_data = new Data;
		tmp = src.getData();
		_data->name = tmp->name;
		_data->number = tmp->number;
	}
	return (*this);
}

void	Serial::setData(std::string s)
{
	_data = new Data;
	(*_data).name = s;
	(*_data).number = atoi(s.c_str());
}

Data *Serial::getData()const
{
	return (_data);
}

std::ostream	&operator<<(std::ostream &o, const Serial &s)
{
	Data	*tmp;

	tmp = s.getData();
	o << "Serial " << (*tmp).name << ":" << std::endl;
	o << (*tmp).number << std::endl;

	return (o);
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
