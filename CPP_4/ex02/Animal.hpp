/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:11:43 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/13 16:11:58 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string		type;
private:
public:
	Animal();
	Animal(const Animal &obj);

	virtual ~Animal();

	Animal &operator=(const Animal &src);
	std::string		getType()const;
	virtual void			makeSound()const;
};
