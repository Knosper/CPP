/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:16:47 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 01:16:31 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*ptr;
public:
	Cat();
	Cat(const Cat &c);

	~Cat();

	Cat &operator=(const Cat &src);

	void				setIdea(int i, const std::string s);
	void			 	getIdeas();
	
	void			makeSound()const;
};
