# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 13:38:40 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/17 21:57:06 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fix

SRC =	main.cpp	\
		Fixed.cpp	\

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