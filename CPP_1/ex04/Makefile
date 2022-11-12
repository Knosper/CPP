# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 14:51:45 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/12 13:31:21 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = sed

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