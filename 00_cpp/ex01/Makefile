# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 14:19:25 by diosanto          #+#    #+#              #
#    Updated: 2024/01/12 19:09:55 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PhoneBook
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address
RM			=	rm -f

SRCS		=	PhoneBook.cpp 		\
				Contact.cpp 		\
				PhoneBookUtils.cpp	\
				AddContact.cpp		\
				SearchContact.cpp	\

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