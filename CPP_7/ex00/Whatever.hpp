/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:46:27 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/04 01:57:37 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>

template<typename S>

void	swap(S &one, S &two)
{
	S tmp;

	tmp = two;
	two = one;
	one = tmp;
}

template<typename M>

const M	&min(M &one, M &two)
{
	if (one < two)
		return (one);
	return (two);
}

template<typename N>

const N	&max(N &one, N &two)
{
	if (one > two)
		return (one);
	return (two);
}