/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:38:24 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/09 17:18:03 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <string.h>

class Sed
{
private:
	std::ifstream	file1;
	std::ofstream	file2;
public:
	Sed();
	~Sed();
	int	start_sed(char **args);
};

#endif