/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:51:27 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/08 16:05:37 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>
# include <iostream>
# include <stdio.h>
# include <string.h>
 
#define	LIST "index     |firstname |lastname  |nickname  |"
#define LIMIT "-------------------------------------------|"

class Contact
{
private:
	std::string		f_name;
	std::string		l_name;
	std::string		n_name;
	std::string		nb;
	std::string		secret;
public:
	//Contact(void);
	//~Contact(void);
	void	set_data(int round, std::string save);
	void	print_contact(int round);
	void	print_all(void);
	std::string	get_data(int round);
};

#endif