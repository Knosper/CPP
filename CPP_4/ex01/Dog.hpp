/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 17:57:51 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*ptr;
public:
	Dog();
	Dog(const Dog &c);
	~Dog();
	Dog &operator=(const Dog &src);
	void			makeSound()const;
};
