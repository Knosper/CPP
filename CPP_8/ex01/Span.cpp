/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:33:08 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/07 02:44:31 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span():_N(10),_numbers(new int[10])
{
	_pos = 0;
	std::cout << "default Span[10] constructed" << std::endl;	
}

Span::Span(unsigned int N):_N(N),_numbers(new int[_N])
{
	_pos = 0;
	std::cout << "Span[" << _N << "] constructed" << std::endl;	
}

Span::~Span()
{
	delete[] _numbers;
	std::cout << "Span destructed" << std::endl;
}


//setter
void	Span::addNumber(int n)
{
	if (_pos >= static_cast<int>(_N))
		throw (ListFullException());
	_numbers[_pos] = n;
	_pos += 1;
}

void	Span::fillSpan()
{
	srand(time(NULL));
	int	n = rand() % 987;
	int i = 0;
	while (i < static_cast<int>(_N))
	{
		addNumber(n);
		n = rand() % 987;
		i++;
	}
}

//getter
int		Span::getSize(void) const
{
	return (_N);
}

int		Span::getPos(void) const
{
	return (_pos);	
}

int		Span::getNum(int index) const
{
	if (index >= _pos)
		throw (ListFullException());
	return (_numbers[index]);
}

int		Span::SmallestNum() const
{
	int i = 0;
	int	tmp;
	if (_pos == 0)
		throw (ListEmptyException());
	tmp = _numbers[i];
	while (i < _pos)
	{
		if (_numbers[i] < tmp)
			tmp = _numbers[i];
		i++;
	}
	return (tmp);
}

int		Span::BiggestNum() const
{
	int i = 0;
	int	tmp = 0;
	if (_pos == 0)
		throw (ListEmptyException());
	tmp = _numbers[i];
	while (i < _pos)
	{
		if (_numbers[i] > tmp)
			tmp = _numbers[i];
		i++;
	}
	return (tmp);
}

int		Span::shortestSpan() const
{
	int i = 0;
	int j = 0;
	int res = 0;
	int res2 = 0;
	if (_pos <= 1)
		throw (ListEmptyException());
	while (i < _pos)
	{
		while (j < _pos)
		{
			if (j == i)
				j++;
			if (j < _pos && _numbers[j] > _numbers[i])
			{
				res = _numbers[j] - _numbers[i];
				if (res2 == 0 || res2 > res)
					res2 = res;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (res2);
}

int		Span::longestSpan() const
{
	int i = 0;
	int j = 0;
	int res = 0;
	int res2 = 0;
	if (_pos <= 1)
		throw (ListEmptyException());
	while (i < _pos)
	{
		while (j < _pos)
		{
			if (j == i)
				j++;
			if (j < _pos && _numbers[j] > _numbers[i])
			{
				res = _numbers[j] - _numbers[i];
				if (res2 == 0 || res2 < res)
					res2 = res;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (res2);
}

//operators
Span	&Span::operator=(const Span &src)
{
	if (this != &src)
	{
		int i = 0;
		_N = src.getSize();
		_pos = src.getPos();
		while (i < static_cast<int>(_N))
		{
			_numbers[i] = src.getNum(i);
			i++;
		}
		std::cout << "copy operator called" << std::endl;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Span &src)
{
	int i = 0;
	int pos = src.getPos();
	if (pos == 0)
		o << "no numbers saved";
	else
	{
		while (i < pos)
		{
			o << src.getNum(i) << " ";
			i++;
		}
	}
	return (o);
}

//Exceptions
const char *Span::ListFullException::what()
{
	return ("No Space left");
}

const char *Span::ListEmptyException::what()
{
	return ("No span can be found");
}

const char *Span::ListIndexException::what()
{
	return ("Index out of bound");
}