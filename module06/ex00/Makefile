# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/28 14:36:30 by qfeuilla          #+#    #+#              #
#    Updated: 2020/02/11 09:28:48 by qfeuilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = main.cpp

FLAG = -Wall -Wextra -Werror

SRCDIR = srcs/

SRCS = $(addprefix $(SRCDIR), $(SRC))

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	clang++ $(FLAG) -c -o $@ $<

$(NAME): $(OBJS)
	clang++ $(OBJS) -o $(NAME)

all: $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all