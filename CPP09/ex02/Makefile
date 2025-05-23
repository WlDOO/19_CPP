CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 #-std=c++98

SRCS = main.cpp PmergeMe.cpp
NAME = PmergeMe

INCLUDE = -I RPN.hpp

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