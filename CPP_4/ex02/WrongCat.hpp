/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:37:59 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 17:46:02 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"

class WrongCat : public Animal
{
private:

public:
	WrongCat();
	WrongCat(const WrongCat &c);
	
	~WrongCat();

	WrongCat &operator=(const WrongCat &src);
	void	makeSound()const;
};
