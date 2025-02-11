CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp ClapTrap.cpp ScavTrap.cpp\

NAME = ScavTrap

INCLUDE = -I ClapTrap.hpp -I ScavTrap.hpp\

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