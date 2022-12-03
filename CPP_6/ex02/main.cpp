/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:37 by jjesberg          #+#    #+#             */
/*   Updated: 2022/12/03 20:38:31 by jjesberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>
#include <unistd.h>

Base	*generate(void)
{
	srand(time(NULL));
	int	n = rand() % 3 + 1;
	switch(n)
	{
		case (1):
			return (new A);
		case (2):
			return (new B);
		case (3):
			return (new C);
	}
	std::cout << "error" << std::endl;
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Its 'A' Base Class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Its 'B' Base Class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Its 'C' Base Class" << std::endl;
	delete p;
}

int	main()
{
	identify(generate());
	usleep(999000);
	identify(generate());
	return (0);
}