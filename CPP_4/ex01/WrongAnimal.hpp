/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:38:20 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 19:28:38 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string		type;
private:

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);

	virtual ~WrongAnimal();

	WrongAnimal 	&operator=(const WrongAnimal &src);

	std::string		getType()const;
	virtual void	makeSound()const;
};
