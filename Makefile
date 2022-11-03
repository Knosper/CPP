NAME = megaphone

FLAGS = -Wall -Wextra -Werror 

CC = g++ -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: NAME

NAME:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all