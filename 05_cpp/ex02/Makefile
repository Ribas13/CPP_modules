NAME		=	Form
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address
RM			=	rm -f

SRCS		=	main.cpp		\
				Bureaucrat.cpp	\
				AForm.cpp		\
				PresidentialPardonForm.cpp	\
				RobotomyRequestForm.cpp		\
				ShrubberyCreationForm.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) *_shrubbery

re: fclean all