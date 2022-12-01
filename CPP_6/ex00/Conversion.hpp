/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:39 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/01 06:16:02 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstdlib>
# include <math.h>
# include <limits.h>
#include <string.h>

class Conversion
{
private:

	bool	_c;
	double	_val;
	int		_integer; 
	int		_character;
	float	_f_n;
	double	_d_n;
	char	*_ptr_v;
	char	*_ptr_d;

public:

	Conversion();
	Conversion(const char *data);
	~Conversion();
	
	void	fill_int(const std::string src);
	void	fill_char(const std::string src);
	void	fill_float(const std::string src);
	void	fill_double(const std::string src);
	
	int		getInt() const;
	char	getChar() const;
	float	getFloat() const;
	double	getDouble() const;

};

std::ostream &operator<<(std::ostream &o, Conversion const &p);
