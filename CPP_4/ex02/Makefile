# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 16:11:32 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/14 16:20:06 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly

SRC = *.cpp

FLAGS = -Wall -Wextra #-Werror 

CC = g++ -std=c++98

all: NAME

NAME:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all