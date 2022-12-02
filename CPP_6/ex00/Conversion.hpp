/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:39 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/02 23:28:32 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstdlib>
# include <math.h>
# include <limits.h>
#include <string.h>

#define T_INVAL		-1
#define T_CHAR		1
#define T_INT		2
#define T_FLOAT		3
#define T_DOUBLE 	4
#define T_NAN		5
#define DEBUG		6

class Conversion
{
private:
	const std::string _input;
	bool	_error;
	char 	*_ptr;
	size_t _val[2];
	int		_type;
	int		_int;
	bool	_i_nt;
	char	_char;
	bool	_c_har;
	float	_float;
	bool	_f_loat;
	double	_double;
public:

	Conversion();
	Conversion(const char *data);
	Conversion(const Conversion &cp);
	~Conversion();
	
	Conversion &operator=(const Conversion &src);

	int		checkType();
	void	start();
	void	fillChar();
	void	fillInt();
	void	fillFloat();
	void	fillDouble();
	
	const std::string	getInput() const;

	size_t	getVal1() const;
	size_t	getVal2() const;
	int		getType() const;
	int		getInt() const;
	char	getChar() const;
	float	getFloat() const;
	double	getDouble() const;

	bool	getI_nt() const;
	bool	getC_har() const;
	bool	getError() const;

};

std::ostream 	&operator<<(std::ostream &o, Conversion const &p);
