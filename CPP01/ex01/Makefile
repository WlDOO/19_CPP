CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp\

NAME = HordeZombie

INCLUDE = -I Zombie.hpp \

MY_OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME) : $(MY_OBJECTS)
	@$(CXX) $(CXX_FLAGS) $(INCLUDE) $(MY_OBJECTS) -o $(NAME)

clean:
	@${RM} ${MY_OBJECTS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: fclean re clean all