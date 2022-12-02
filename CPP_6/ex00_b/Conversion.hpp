/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:39 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 05:39:56 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstdlib>
# include <math.h>
# include <limits.h>
#include <string.h>

#define T_INVAL		-1
#define T_INT		1
#define T_CHAR		2
#define T_FLOAT		3
#define T_DOUBLE 	4
#define T_NAN		5
#define DEBUG		6

class Conversion
{
private:
	const std::string _input;
	char 	*_ptr;
	size_t _val[2];
	int		_type;
	int		_int;
	char	_char;
	float	_float;
	double	_double;
public:

	Conversion();
	Conversion(const char *data);
	Conversion(const Conversion &cp);
	~Conversion();
	
	Conversion &operator=(const Conversion &src);

	int		checkType();
	/*void	fill_int(const std::string src);
	void	fill_char(const std::string src);
	void	fill_float(const std::string src);
	void	fill_double(const std::string src);*/
	
	const std::string	getInput() const;

	int		getType() const;
	int		getInt() const;
	char	getChar() const;
	float	getFloat() const;
	double	getDouble() const;

};

std::ostream 	&operator<<(std::ostream &o, Conversion const &p);
