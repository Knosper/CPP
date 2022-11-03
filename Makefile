# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjesberg <jjesberg@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 16:39:34 by jjesberg          #+#    #+#              #
#    Updated: 2022/11/03 16:39:36 by jjesberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror 

CC = @g++ -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: NAME

NAME: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all