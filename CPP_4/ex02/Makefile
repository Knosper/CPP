# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 16:11:32 by jjesberg          #+#    #+#              #
#    Updated: 2022/12/08 17:55:56 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly

SRC =	main.cpp	\
		Animal.cpp	\
		Dog.cpp	\
		Cat.cpp	\
		WrongCat.cpp	\
		WrongAnimal.cpp	\
		Brain.cpp

OBJS = $(SRC:%.cpp=%.o)

C_FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(C_FLAGS) -MMD -MP -c $< -o $@

clean:
	@rm -f *.o
	@rm -f *.d

fclean: clean
	@rm -f $(NAME)

re: fclean all
