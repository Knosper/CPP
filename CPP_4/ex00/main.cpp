/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:11:18 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 16:13:55 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"
# include "WrongDog.hpp"

int	main()
{
	const Animal* meta = new Dog();
	std::cout << meta->getType() << std::endl;
	meta->makeSound();

	delete meta;
	return (0);
}