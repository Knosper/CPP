/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:55:12 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/01 22:56:36 by jjesberg         ###   ########.fr       */
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
	Brain(const Brain &cp);
	~Brain();

	Brain &operator=(const Brain &src);

	const std::string	getIdea(int i)const;
};

