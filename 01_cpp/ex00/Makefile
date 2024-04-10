# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 15:05:49 by diosanto          #+#    #+#              #
#    Updated: 2024/04/10 15:01:50 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Zombie
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address
RM			=	rm -f

SRCS		=	main.cpp		\
				newZombie.cpp	\
				randomChump.cpp	\
				Zombie.cpp		\

OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

noleaks: re
	valgrind ./$(NAME)

noleaksfull: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)