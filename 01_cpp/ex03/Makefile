# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 17:31:12 by diosanto          #+#    #+#              #
#    Updated: 2024/01/23 17:31:37 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	War
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address
RM			=	rm -f

SRCS		=	main.cpp		\
				Zombie.cpp		\
				zombieHorde.cpp	\

OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

noleaks: re
	valgrind ./$(NAME)

noleaksfull: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)