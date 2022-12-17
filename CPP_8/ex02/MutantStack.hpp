/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 02:35:36 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/17 20:34:27 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <stack>
# include <string>
# include <iostream>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <cstdlib>
#include <vector>
#include <list>
#include <map>
#include <queue>

template <typename T>
class	MutantStack : public std::stack<T> 
{
	public :
		
	MutantStack(void) : std::stack<T>() { }
	MutantStack(MutantStack const &ref) : std::stack<T>(ref) { }

	virtual ~MutantStack(void) { }

	MutantStack &operator=(MutantStack const &ref) 
	{
		this->c = ref.c;
		return (*this); 
	}

	typedef typename	std::stack<T>::container_type::iterator							iterator;
	typedef typename	std::stack<T>::container_type::const_iterator					const_iterator;
	typedef typename	std::stack<T>::container_type::reverse_iterator					reverse_iterator;
	typedef typename	std::stack<T>::container_type::const_reverse_iterator			const_reverse_iterator;

	iterator				begin(void)					{ return (this->c.begin()); }
	iterator				end(void)					{ return (this->c.end()); }

	const_iterator			begin(void)	const			{ return (this->c.begin()); }
	const_iterator			end(void)	const			{ return (this->c.end()); }
	reverse_iterator		rbegin(void)				{ return (this->c.rbegin()); }
	reverse_iterator		rend(void)					{ return (this->c.rend()); }

	const_reverse_iterator	rbegin(void) 	const	{ return (this->c.rbegin()); }
	const_reverse_iterator	rend(void)		const	{ return (this->c.rend()); }
};
