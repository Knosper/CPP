/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:39 by jjesberg          #+#    #+#             */
/*   Updated: 2022/11/28 01:07:22 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstdlib>
# include <cmath>

class Conversion
{
private:
	int		_integer;
	char	_character;
	float	_f_n;
	double	_d_n;
public:

	Conversion();
	~Conversion();
	void	fill_data(const std::string src);
	int		getInt() const;
	char	getChar() const;
	float	getFloat() const;
};
