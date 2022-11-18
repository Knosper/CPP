/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:51:42 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/18 13:24:35 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **args)
{
	if (argc == 4)
	{
		Sed		sed(args);
		if (sed.check_arg(args))
			std::cout << "empty arg" << std::endl;
		else if (sed.start_sed(args))
			return (1);
	}
	else
	{
		std::cout << "Arg error" << std::endl;
		return (2);
	}
	return (0);
}
