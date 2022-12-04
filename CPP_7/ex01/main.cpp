/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:46:32 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/04 02:43:10 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Iter.hpp"



int main() 
{
	char s[] = {"Hallo\n"};
	int	i[] = {1,2,3,4,5,6};
	size_t len = static_cast<size_t>(6);

	Iter(s, len, ft_write);
	Iter(i, len, ft_write);
	return 0;
}