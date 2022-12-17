# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 20:41:18 by jjesberg          #+#    #+#              #
#    Updated: 2022/12/15 03:43:42 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

SRC =	main.cpp

OBJS = $(SRC:.cpp=.o)

C_FLAGS = -Wall -Wextra  -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(C_FLAGS) -MMD -MP -c $< -o $@

clean:
	@rm -f *.o
	@rm -f *.d

fclean: clean
	@rm -f $(NAME)

re: fclean all
