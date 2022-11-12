# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 15:47:22 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/12 15:47:33 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fix

SRC = *.cpp

FLAGS = -Wall -Wextra -Werror 

CC = g++ -std=c++98

all: NAME

NAME:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all