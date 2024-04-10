# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:39:20 by diosanto          #+#    #+#              #
#    Updated: 2024/04/10 15:02:13 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Zombies
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address
RM			=	rm -f

SRCS		=	main.cpp		\
				Zombie.cpp		\
				zombieHorde.cpp	\

OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all