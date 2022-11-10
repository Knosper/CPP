# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 13:41:46 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/10 13:42:07 by jjesberg         ###   ########.fr        #
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