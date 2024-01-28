# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:39:20 by diosanto          #+#    #+#              #
#    Updated: 2024/01/27 22:29:44 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Zombies
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