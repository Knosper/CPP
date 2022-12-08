/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:11:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/08 17:43:14 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

int	main()
{
	const Animal* meta1 = new Dog();
	std::cout << "type = " << meta1->getType() << std::endl;
	Animal Z(*meta1);
	Cat T;
	Cat X(T);
	WrongCat W;
	meta1->makeSound();
	W.makeSound();
	X.makeSound();
	X.makeSound();
	Z.makeSound();
	delete meta1;

	const WrongAnimal* meta = new WrongCat();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete (j);
	delete (i);

	meta->makeSound();
	delete (meta);

	return (0);
}