/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 05:26:33 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

static int	checkString(const std::string s)
{
	int i = 0;
	int c_char = 0;
	int	plus = 0;
	int minus = 0;
	int f = 0;
	int p = 0;
	while (s[i])
	{
		if (s[i] == '+')
			plus++;
		else if (s[i] == '-')
			minus++;
		if ((plus && minus) || (plus == 2 || minus == 2))
			return (1);
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (!isdigit(s[i]) && s[i] != '-' && s[i] != '+' && s[i] != '.' && s[i] != 'f')
			c_char++;
		if (s[i] == 'f')
		{
			f++;
			if (f > 1 || i != s.length() - 1)
				return (1);
		}
		if (s[i] == '.')
		{
			p++;
			if (p > 1 || i == 0 || i == s.length() - 1 || (i < s.length() - 1 && !isdigit(s[i + 1])))
				return (1);
		}
		if (c_char > 0)
			return (1);
		i++;
	}
	return (0);
}

static int	checkPointVal(const std::string s, size_t *_val1, unsigned long *_val2)
{
	int i = 0;
	int j = 0;
	*_val1 = 0;
	*_val2 = 0;
	while (s[i])
	{
		if (isdigit(s[i]))
			*_val1 += 1;
		if (s[i] == '.')
		{
			if (i == 0)
				return (T_INVAL);
			i++;
			break;
		}
		i++;
	}
	if (s[i] && isdigit(s[i]))
	{
		while (s[i])
		{
			if (isdigit(s[i]))
				*_val2 += 1;
			i++;
		}
	}
	else if (!s[i] || s[i] == 'f')
		return (0);
	return (0);
}

Conversion::Conversion()
{
	std::cout << std::endl << "default Conversation started" << std::endl << std::endl;
}

Conversion::Conversion(const char *data):_input(static_cast<std::string>(data))
{
	std::cout << std::endl << "Conversation of [" << _input << "] started:" << std::endl << std::endl;
	_type = this->checkType();
	if (_type == T_INVAL)
	{
		std::cout << "char: [impossible]" << std::endl;
		std::cout << "int: [impossible]" << std::endl;
		std::cout << "float: [nanf]" << std::endl;
		std::cout << "double: [nan]" << std::endl;
	}
	else
		std::cout << "type =" << _type << std::endl;
}

Conversion::Conversion(const Conversion &cp):_input(cp.getInput())
{
	*this = cp;
	std::cout << std::endl << "Conversation copied; input: [" << _input << "]" << std::endl << std::endl;
}

Conversion::~Conversion()
{
	std::cout << std::endl << "Conversation closed" << std::endl;
}

int		Conversion::checkType()
{
	if (_input.length () == 0)
		return (T_INVAL);
	size_t _val[2];

	if (_input == "nan" || _input == "inf" || _input == "-inf")
	{
		std::cout << "char: [impossible]" << std::endl;
		std::cout << "int: [impossible]" << std::endl;
		std::cout << "float: [" << _input << "f]" << std::endl;
		std::cout << "double: [" << _input << "]" << std::endl;
		return (T_NAN);
	}
	else if (_input == "nanf")
	{
		std::cout << "char: [impossible]" << std::endl;
		std::cout << "int: [impossible]" << std::endl;
		std::cout << "float: [nanf]" << std::endl;
		std::cout << "double: [nan]" << std::endl;
		return (T_NAN);
	}
	else if (_input.length() == 1 && !isdigit(_input[0]) && isascii(_input[0]))
		return (T_CHAR);
	else if (checkString(_input) || checkPointVal(_input, &_val[0], &_val[1]) == T_INVAL)
		return (T_INVAL);
	else if (_val[0] > 38 && _val[0] < 309)
	{
		/*_float = std::strtof(_input.c_str(), &tmp1);
		_double = std::strtod(_input.c_str(), &tmp2);
		std::cout << "first val = " << _val[0] << std::endl;
		std::cout << "sec val = " << _val[1] << std::endl;
		std::cout << "Float = " << _float << "f" << std::endl;
		std::cout << "Double = " << _double << std::endl;*/
		return (T_DOUBLE);
	}
	else if (_val[0] >= 0 && _val[0] < 39)
		return (T_FLOAT);
	return (T_INVAL);
}

int	Conversion::getInt() const
{
	return (_int);
}

char	Conversion::getChar() const
{
	return (_char);
}

float	Conversion::getFloat() const
{
	return (_float);
}

double	Conversion::getDouble() const
{
	return (_double);
}

int	Conversion::getType() const
{
	return (_type);
}

const std::string	Conversion::getInput() const
{
	return (_input);
}

Conversion &Conversion::operator=(const Conversion &src)
{
	if (this != &src)
	{
		this->_type = src.getType();
		this->_int = src.getInt();
		this->_char = src.getChar();
		this->_float = src.getFloat();
		this->_double = src.getDouble();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Conversion const &p)
{
	o << "int = " << p.getInt() << std::endl \
	<< "char = " << p.getChar() << std::endl \
	<< "float = " << p.getFloat() << std::endl \
	<< "double = " << p.getDouble() << std::endl;
	return (o);
}
