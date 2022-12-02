/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 23:52:37 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

static int	haschar(std::string s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

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
	size_t	tmp = 0;
	while (s[i] == '+' || s[i] == '-' || s[i] == '0')
		i++;
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
			{
				if (s[i] != '0')
					tmp++;
				*_val2 += 1;
			}
			i++;
		}
		if (tmp == 0)
			*_val2 = 0;		
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
	_error = false;
	if (_type == T_INVAL)
	{
		std::cout << "char: [impossible]" << std::endl;
		std::cout << "int: [impossible]" << std::endl;
		std::cout << "float: [nanf]" << std::endl;
		std::cout << "double: [nan]" << std::endl;
		_error = true;
	}
	else if (_type != T_NAN)
		start();
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
	if (_input == "nan" || _input == "inf" || _input == "-inf" || _input == "+inf")
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
	_int = std::atoi(_input.c_str());
	_float = std::strtof(_input.c_str(), &_ptr);
	if (_input.length() == 1 && !isdigit(_input[0]) && isascii(_input[0]))
		return (T_CHAR);
	else if (checkString(_input) || checkPointVal(_input, &_val[0], &_val[1]) == T_INVAL)
		return (T_INVAL);
	else if (!haschar(_input, '.') && !haschar(_input, 'f') && _val[0] < 11 && (_float < INT_MAX && _float > INT_MIN))
		return (T_INT);
	else if (_val[0] > 38 && _val[0] < 309)
		return (T_DOUBLE);
	else if (_val[0] >= 0 && _val[0] < 39)
		return (T_FLOAT);
	return (T_INVAL);
}

void	Conversion::start()
{
	int i = 0;
	void (Conversion::*functionPTRS[])(void) = {&Conversion::fillChar, &Conversion::fillInt, &Conversion::fillFloat, &Conversion::fillDouble};
	
	(this->*functionPTRS[_type - 1])();
	
	if (_type == T_CHAR)
	{
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
	}
	else if (_type == T_INT)
	{
		_char = static_cast<char>(_int);
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
	}
	else if (_type == T_FLOAT)
	{
		_int = static_cast<int>(_float);
		_char = static_cast<char>(_float);
		_double = static_cast<double>(_float);
	}
	else if (_type == T_DOUBLE)
	{
		_int = static_cast<int>(_double);
		_char = static_cast<char>(_double);
		_double = static_cast<double>(_double);
	}
}

void	Conversion::fillChar()
{
	double	val;
	char	*tmp;

	_c_har = false;
	val = strtod(_input.c_str(), &tmp);
	if (_input.length() == 1)
	{
		if (val == _input[0] - '0')
			_char = static_cast<char>(val);
		else
			_char = static_cast<char>(_input[0]);
	}
	else if (!(val >= 8 && val <= 12) && !(val > 31 && val < 127))
	{
		_c_har = true;
		_char = 0;
	}
	else
		_char = static_cast<char>(val);
}

void	Conversion::fillInt()
{
	double	val;
	char	*tmp;

	_i_nt = false;
	val = strtod(_input.c_str(), &tmp);
	if (_input.length() == 1 && !isdigit(_input[0]))
		_int = static_cast<int>(_input[0]);
	else if (val > INT_MAX || val < INT_MIN)
	{
		_i_nt = true;
		_int = 0;
	}
	else
		_int = static_cast<int>(val);
}

void	Conversion::fillFloat()
{
	_f_loat = false;
	_float = atof(_input.c_str());
}

void	Conversion::fillDouble()
{
	char	*tmp;
	_double = std::strtod(_input.c_str(), &tmp);
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

size_t	Conversion::getVal2() const
{
	return (_val[1]);
}

size_t	Conversion::getVal1() const
{
	return (_val[0]);
}

const std::string	Conversion::getInput() const
{
	return (_input);
}

bool	Conversion::getI_nt() const
{
	return (_i_nt);	
}

bool	Conversion::getC_har() const
{
	return (_c_har);	
}

bool	Conversion::getError() const
{
	return (_error);	
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
	double	val;
	char	*tmp;

	if (p.getError() == false)
	{
		val = strtod(p.getInput().c_str(), &tmp);
		if (((val >= 8 && val <= 12) || (val > 31 && val < 127)))
			o << "char: '" << p.getChar() << "'" << std::endl;
		else if (val > 126 || val < 0)
			o << "char: 'impossible'" << std::endl;
		else
			o << "char: 'not displayable'" << std::endl;
		if ((val < INT_MAX && val > INT_MIN))
			o << "int: '" << p.getInt() << "'" << std::endl;
		else
			o << "int: 'impossible'" << std::endl;
		if (p.getVal1() > 6 || (p.getVal2() > 0))
			o << "float: " << p.getFloat() << "f" << std::endl;
		else if (p.getVal2() <= 0 && p.getVal1() < 7)
			o << "float: " << p.getFloat() << ".0f" << std::endl;
		if (p.getVal1() > 6 || (p.getVal2() > 0))
			o << "double: " << p.getDouble() << std::endl;
		else if (p.getVal2() <= 0 && p.getVal1() < 7)
			o << "double: " << p.getDouble() << ".0" << std::endl;
	}
	else
		o << "";
	return (o);
}
