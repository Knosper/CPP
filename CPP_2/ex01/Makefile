# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <j.jesberger@heilbronn.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 19:05:02 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/10 21:24:03 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fix

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