/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:32:38 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/07 02:27:17 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>
#include <stdlib.h>

class Span
{
private:
	unsigned int	_N;
	int				*_numbers;
	int 			_pos;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &cp);
	~Span();

	//setter
	void	addNumber(int n);
	void	fillSpan();

	//getter
	int		getSize(void) const;
	int		getPos(void) const;
	int		getNum(int index) const;
	int		shortestSpan() const;
	int		longestSpan() const;
	int		SmallestNum() const;
	int		BiggestNum() const;

	//operator
	Span	&operator=(const Span &src);

	class	ListFullException : public std::exception
	{
		public:
			virtual const char *what();
	};
	class	ListEmptyException : public std::exception
	{
		public:
			virtual const char *what();
	};
	class	ListIndexException : public std::exception
	{
		public:
			virtual const char *what();
	};
};

//operator
std::ostream	&operator<<(std::ostream &o, const Span &src);
