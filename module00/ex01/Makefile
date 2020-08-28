FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Contact.cpp
CC = clang++
NAME = phone

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
all: $(NAME)

valgrind:
	valgrind --leak-check=full ./$(NAME) 
clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all