/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:57 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/14 16:06:39 by jjesberg         ###   ########.fr       */
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

	void getIdeas(void)const;
	
	void setIdea(size_t i, std::string idea);
};
