/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/01 01:34:26 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

int	main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
	{
		std::cout << "Invalid args" << std::endl;
		return (1);
	}
	i = 1;
	while (argv[i])
	{
		Conversion	A(argv[i]);
		A.fill_int(argv[i]);
		A.fill_char(argv[i]);
		A.fill_float(argv[i]);
		A.fill_double(argv[i]);
		//std::cout << A << std::endl;
		i++;
	}
	return (0);
}