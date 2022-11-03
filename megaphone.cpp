/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:40:13 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/03 16:31:01 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(int argc, char **args)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc > 1)
	{
		while (args[i])
		{
			while (args[i][j])
				std::cout << (char)toupper((int)args[i][j++]);
			j = 0;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
