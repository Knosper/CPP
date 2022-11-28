/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 01:35:31 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"
# include <stdio.h>

int	main(int argc, char **argv)
{
	Conversion	A;
	int			i = 1;

	while (argv[i])
	{
		A.fill_data(argv[i]);
		std::cout << "Int == " << A.getInt() << std::endl;
		std::cout << "Char == " << A.getChar() << std::endl;
		//printf("Hier = %c\n", A.getChar());
		std::cout << "Float == " << A.getFloat() << std::endl;
		//std::cout << "Int == " << A.getInt() << std::endl;
		i++;
	}
	return (0);
}