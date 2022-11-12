/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:38:24 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/12 13:35:26 by jjesberg         ###   ########.fr       */
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
	int				lines;
	char			**args;
	std::string		s1;
	std::string		s2;
	Sed(char **args);
	~Sed();
	int				check_line();
	int				start_sed(char **args);
	std::string		occurrence(std::string save, std::string s1, std::string s2);
	void			check_text(const std::string filename);
};

#endif