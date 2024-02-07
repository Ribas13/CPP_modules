# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 13:49:07 by diosanto          #+#    #+#              #
#    Updated: 2024/01/30 14:30:19 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Fixed
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address
RM			=	rm -f

SRCS		=	main.cpp		\
				Fixed.cpp

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