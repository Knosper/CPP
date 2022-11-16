# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 01:51:23 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/16 14:06:09 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FLAGS = -Wall -Wextra -Werror 

CC = g++ -std=c++98

SRC = *.cpp

all: NAME

NAME:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all