/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:33:08 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/09 23:30:32 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span():_N(10)
{
	_pos = 0;
	_numbers.reserve(_N);
	std::cout << "default Span[10] constructed" << std::endl;	
}

Span::Span(unsigned int N):_N(N)
{
	_pos = 0;
	_numbers.reserve(_N);
	std::cout << "Span[" << _N << "] constructed" << std::endl;
}

Span::Span(const Span &cp)
{
	*this = cp;	
	std::cout << "Span[" << _N << "] copied" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructed" << std::endl;
}


//setter
void	Span::addNumber(int n)
{
	if (_pos >= static_cast<int>(_N))
		throw (ListFullException());
	_numbers.push_back(n);
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
		throw (ListIndexException());
	return (_numbers[index]);
}

size_t		Span::shortestSpan() const
{
	int i = 0;
	if (_pos == 0)
		throw (ListEmptyException());
	else if (_pos == 1)
		throw (NoSpanPossible());
	std::vector<int> tmp(_numbers);
	std::sort (tmp.begin(), tmp.end());
	std::vector<int>::iterator	first = tmp.begin();
	std::vector<int>::iterator	second = tmp.begin() + 1;
	size_t ret = _numbers[i + 1] - _numbers[i];
	while (second != tmp.end())
	{
		if (static_cast<size_t>(second[i] - first[i]) > UINT_MAX)
		{
			std::cout << "span too big" << std::endl;
			return (0);
		}
		else if (static_cast<size_t>(second[i] - first[i]) < ret)
			ret = second[i] - first[i];
		i++;
	}
	return (ret);
}

size_t		Span::longestSpan() const
{
	int i = 0;
	std::cout << "pos = " << _pos << std::endl;
	if (_pos == 0)
		throw (ListEmptyException());
	else if (_pos == 1)
		throw (NoSpanPossible());
	std::vector<int> tmp(_numbers);
	std::sort (tmp.begin(), tmp.end());
	std::vector<int>::iterator	first = tmp.begin();
	std::vector<int>::iterator	second = tmp.begin() + 1;
	size_t ret = _numbers[i + 1] - _numbers[i];
	while (second != tmp.end())
	{
		if (static_cast<size_t>(second[i] - first[i]) > UINT_MAX)
		{
			std::cout << "span too big" << std::endl;
			return (0);
		}
		else if (static_cast<size_t>(second[i] - first[i]) > ret)
			ret = second[i] - first[i];
		i++;
	}
	return (ret);
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
const char *Span::ListFullException::what() const throw()
{
	return ("No Space left");
}

const char *Span::ListEmptyException::what() const throw()
{
	return ("List is empty");
}

const char *Span::NoSpanPossible::what() const throw()
{
	return ("No span can be found");
}

const char *Span::ListIndexException::what() const throw()
{
	return ("Index out of bound");
}