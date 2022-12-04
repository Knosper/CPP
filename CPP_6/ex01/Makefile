# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 00:45:52 by jjesberg          #+#    #+#              #
#    Updated: 2022/12/03 20:41:04 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serial

SRC =	main.cpp	\
		Serial.cpp	\

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