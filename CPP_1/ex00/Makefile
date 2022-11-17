# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 00:16:35 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/17 20:53:49 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC =	main.cpp	\
		newZombie.cpp	\
		randomChump.cpp	\
		Zombie.cpp

OBJS = $(SRC:%.cpp=%.o)

C_FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) $(OBJS) -o $@

%.o: %.cpp %.d
	$(CC) $(C_FLAGS) -MMD -MP -c $< -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all