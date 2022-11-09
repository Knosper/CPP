/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:51:30 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/06 20:13:52 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include 	<iostream>
# include 	<string>
# include <stdlib.h>

class PhoneBook
{
private:
	Contact		contacts[8];
	int			space;
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add_c(void);
	void	search_c(void);
	Contact	get_contact(int	space);
};

#endif