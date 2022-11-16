/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:55:12 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/16 13:20:01 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Brain
{
private:
	std::string	ideas[100];
public:

	Brain();
	Brain(const Brain &c);

	virtual ~Brain();

	Brain &operator=(const Brain &src);

	const std::string getIdea(size_t i)const;
	const std::string *getIdeaAddress(size_t i)const;
	
	void setIdea(size_t i, std::string src);
};

