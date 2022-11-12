/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:51:42 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/11 14:06:53 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **args)
{
	if (argc == 4)
	{
		Sed		sed(args);
		if(sed.start_sed(args))
			return (1);
	}
	else
	{
		std::cout << "Arg error" << std::endl;
		return (2);
	}
	return (0);
}
