/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/01 23:00:45 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

static int	haschar(const char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

Conversion::Conversion()
{
	_ptr_d = NULL;
	_ptr_v = NULL;
	_c = false;
	std::cout << std::endl << "Conversation started" << std::endl << std::endl;
}

Conversion::Conversion(const char *data)
{
	_ptr_d = NULL;
	_ptr_v = NULL;
	_c = false;
	std::cout << std::endl << "Conversation of [" << data << "] started:" << std::endl << std::endl;
}

Conversion::~Conversion()
{
	std::cout << std::endl << "Conversation closed" << std::endl;
}

static int	intCheck(std::string src)
{
	int	i = 0;
	int	flag = 0;
	while (src[i] && src.length() > 1)
	{
		if (!isdigit(src[i]))
		{
			if (i == 0)
				return (1);
			if (src[i] == '.')
				flag++;
			if ((i != src.length() - 1 && src[i] != '.') || flag > 1)
				return (1);
			if (src[i] != 'f' && src[i] != '.')
				return (1);
			if (src[i] == '.' && (i == src.length() - 1 \
			|| (src[i + 1] && !isdigit(src[i + 1]))))
				return (1);
		}
		i++;
	}
	return (0);
}

void	Conversion::fill_int(const std::string src)
{
	if (src.length() == 1 && !isdigit(src[0]))
	{
		_integer = static_cast<int>(src[0]);
		std::cout << "Int = [" << _integer << "]" << std::endl;
		return ;
	}
	_val = strtod(src.c_str(), &_ptr_v);
	if (_val > INT_MAX || _val < INT_MIN || isnan(_val) || intCheck(src))
		std::cout << "invalid int" << std::endl;
	else
	{
		_integer = _val;
		std::cout << "Int = [" << _integer << "]" << std::endl;
	}
}

void	Conversion::fill_char(const std::string src)
{
	if (intCheck(src))
		std::cout << "char is not displayable" << std::endl;
	else if (src.length() == 1)
	{
		_character = src[0];
		_c = true;
		std::cout << "char = [" << (char)_character << "]" << std::endl;
	}
	else if (!(_val >= 8 && _val <= 12) && !(_val > 31 && _val < 127))
		std::cout << "char is not displayable" << std::endl;
	else
	{
		_character = _val;
		std::cout << "char = [" << (char)_val << "]" << std::endl;
	}
}

static int	floatCheck(std::string src)
{
	int	i = 0;
	int	flag = 0;
	if (src[i] && src[i] == '-' && src.length() > 1)
		i++;
	while (src[i])
	{
		if (!isdigit(src[i]))
		{
			if (i == 0 || (src[i] != 'f' && src[i] != '.'))
				return (1);
			if (src[i] == 'f' && i != src.length() - 1)
				return (1);
			if (src[i] == '.')
			{
				flag++;
				if (flag > 1 || i == src.length() - 1)
					return (1);
			}
		}
		i++;
	}
	return (0);
}

void	Conversion::fill_float(const std::string src)
{
	_f_n = atof(src.c_str());
	if (_c && !isdigit(src[0]))
	{
		std::cout << "float = [" << (int)src[0] << ".0f]" << std::endl;
	}
	else if (floatCheck(src))
		std::cout << "invalid float" << std::endl;
	else if (_f_n == 0)
		std::cout << "float = [0.0f]" << std::endl;
	else if (!haschar(src.c_str(), '.') && src.length() <= 6)
		std::cout << "float = [" << _f_n << ".0f]" << std::endl;
	else if (src.length() > 38 && src[39] != 'f')
		std::cout << "float = [" << _f_n << "]" << std::endl;
	else
		std::cout << "float = [" << _f_n << "f]" << std::endl;
}

static int	doubleCheck(std::string src)
{
	int	i = 0;
	int	flag = 0;

	if (src[i] == '-' && src.length() != 1)
		i++;
	while (src[i])
	{
		if (!isdigit(src[i]))
		{	
			if (src[i] == 'f' && i != src.length() - 1)
				return (1);
			else if (i == 0)
				return (1);
			else if (src[i] == '.')
			{
				flag++;
				if (flag > 1 || i == src.length() - 1 || (src[i + 1] && !isdigit(src[i + 1])))
					return (1);
			}
			else if (src[i] != '.' && src[i] != 'f')
				return (1);
		}
		i++;
	}
	return (0);
}

void	Conversion::fill_double(const std::string src)
{
	_d_n = std::strtod(src.c_str(), &_ptr_d);
	if (_c && !isdigit(src[0]))
		std::cout << "double = [" << (int)src[0] << "]" << std::endl;
	else if (doubleCheck(src))
	{
		std::cout << "invalid double" << std::endl;
	}
	else if (src.length() > 308)
		std::cout << "double = [" << _d_n << "]" << std::endl;
	else
		std::cout << "double = [" << _d_n << "]" << std::endl;
}

int	Conversion::getInt() const
{
	return (_integer);
}

char	Conversion::getChar() const
{
	return (_character);
}

float	Conversion::getFloat() const
{
	return (_f_n);
}

double	Conversion::getDouble() const
{
	return (_d_n);
}

std::ostream	&operator<<(std::ostream &o, Conversion const &p)
{
	o << "int = " << p.getInt() << std::endl \
	<< "char = " << p.getChar() << std::endl \
	<< "float = " << p.getFloat() << std::endl \
	<< "double = " << p.getDouble() << std::endl;
	return (o);
}
