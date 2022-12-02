/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 01:16:23 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*ptr;
public:

	Dog();
	Dog(const Dog &c);

	~Dog();

	Dog &operator=(const Dog &src);
	
	void				setIdea(int i, const std::string s);
	void			 	getIdeas();

	void			makeSound()const;
};
