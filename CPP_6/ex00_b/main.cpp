/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 05:06:20 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

int	main(int argc, char **argv)
{
	int		i = 1;

	if (argc < 2)
	{
		std::cout << "Invalid args" << std::endl;
		return (1);
	}
	while (argv[i])
	{
		Conversion	A(argv[i]);
		i++;
	}
	return (0);
}