# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 20:41:18 by jjesberg          #+#    #+#              #
#    Updated: 2022/12/06 01:10:35 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

SRC =	main.cpp

OBJS = $(SRC:.cpp=.o)

C_FLAGS = -Wall -Wextra -Werror -std=c++98 -Werror 

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
