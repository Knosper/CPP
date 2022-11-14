/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:11:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/14 15:32:24 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	int	k = 0;
	Animal	*list[100];
	while (k < 100)
	{
		if (k % 2 == 0)
			list[k] = new Dog();
		else
			list[k] = new Cat();
		std::cout << "the " << k + 1 << "th Animal created" << std::endl << "----------------------------------" << std::endl;
		k++;
	}
	while (k > 0)
	{
		k--;
		delete list[k];
		std::cout << "----------------------------------" << std::endl;
	}
	return 0;
}
