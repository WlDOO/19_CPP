CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

SRCS = main.cpp AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

NAME = AForm

INCLUDE = -I AForm.hpp -I Bureaucrat.hpp -I PresidentialPardonForm.hpp -I RobotomyRequestForm.hpp -I ShrubberyCreationForm.hpp -I Intern.hpp

MY_OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME) : $(MY_OBJECTS)
	@$(CXX) $(CXXFLAGS) $(INCLUDE) $(MY_OBJECTS) -o $(NAME)

clean:
	@${RM} ${MY_OBJECTS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: fclean re clean all