/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:33:08 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/17 19:45:53 by jjesberg         ###   ########.fr       */
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
	int	n = rand() % _N + 1;
	std::vector<int>::iterator it;
	int i = _pos;
	while (i < static_cast<int>(_N))
	{
		it = find(this->_numbers.begin(), this->_numbers.end(), n);
		while (it != this->_numbers.end())
		{
			n = rand() % INT_MAX + 1;
			it = find(this->_numbers.begin(), this->_numbers.end(), n);
		}
		std::cout << "Add number: " << n << std::endl;
		addNumber(n);
		n = rand() % _N + 1;
		i++;
	}
}

void	Span::fillSpan(unsigned int range)
{
	unsigned int count = 0;
	srand(time(NULL));
	int	n = rand() % range + 1;
	std::vector<int>::iterator it;
	int i = _pos;
	while (i < static_cast<int>(_N))
	{
		it = find(this->_numbers.begin(), this->_numbers.end(), n);
		while (it != this->_numbers.end())
		{
			if (count > _N)
				n = rand() % INT_MAX + 1;
			else
				n = rand() % range + 1;
			it = find(this->_numbers.begin(), this->_numbers.end(), n);
			count++;
		}
		count = 0;
		std::cout << "Add number: " << n << std::endl;
		addNumber(n);
		n = rand() % range + 1;
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
	if (_pos == 0)
		throw (ListEmptyException());
	else if (_pos == 1)
		throw (NoSpanPossible());
	std::vector<int> tmp(_numbers);
	std::sort (tmp.begin(), tmp.end());
	std::vector<int>::iterator	first = tmp.begin();
	std::vector<int>::iterator	last = tmp.end();
	size_t ret = UINT_MAX;
	size_t diff = UINT_MAX;
	while (first != last - 1)
	{
		diff = std::abs(*first - *(first + 1));
		if (ret > diff)
			ret = diff;
		first++;
	}
	return (ret);
}

size_t		Span::longestSpan() const
{
	if (_pos == 0)
		throw (ListEmptyException());
	else if (_pos == 1)
		throw (NoSpanPossible());
	std::vector<int> tmp(_numbers);
	std::sort (tmp.begin(), tmp.end());
	std::vector<int>::iterator	first = tmp.begin();
	std::vector<int>::iterator	last = tmp.end() - 1;
	return (*last - *first);
}

//operators
Span	&Span::operator=(const Span &src)
{
	if (this != &src)
	{
		int i = 0;
		_N = src.getSize();
		_pos = src.getPos();
		_numbers.reserve(_N);
		while (i < static_cast<int>(_pos))
		{
			_numbers.push_back(src.getNum(i));
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