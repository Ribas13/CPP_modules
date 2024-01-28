# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 23:09:18 by diosanto          #+#    #+#              #
#    Updated: 2024/01/27 23:09:59 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Harl
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address
RM			=	rm -f

SRCS		=	main.cpp		\
				Harl.cpp		\

OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all