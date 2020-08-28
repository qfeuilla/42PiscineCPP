FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp
CC = clang++
NAME = megaphone

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
all: $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all