/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/03 18:48:26 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serial.hpp"

int	main(int argc, char **argv)
{
	Serial	A;
	Data	*test;

	A.setData("1234Test");
	(void)argv;
	(void)argc;
	std::cout << A << std::endl;

	uintptr_t tmp;
	tmp = serialize(A.getData());
	std::cout << "tmp: " << tmp << std::endl;
	test = deserialize(tmp);
	std::cout << test->name << std::endl;
	return (0);
}