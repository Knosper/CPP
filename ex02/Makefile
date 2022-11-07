# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 20:25:52 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/07 15:51:03 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = acc

FLAGS = -Wall -Wextra -Werror 

CC = g++ #-std=c++98

SRC = *.cpp

all: NAME

NAME:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all