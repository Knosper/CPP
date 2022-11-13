/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:38:20 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 17:50:03 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class WrongDog : public Animal
{
private:

public:
	WrongDog();
	WrongDog(const WrongDog &c);

	~WrongDog();
	WrongDog &operator=(const WrongDog &src);
	void	makeSound()const;
};
