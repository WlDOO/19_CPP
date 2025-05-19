CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 #-fsanitize=address -g3

SRCS =  Amateria.cpp  character.cpp  Cure.cpp  Ice.cpp  main.cpp  MateriaSource.cpp

NAME = Materia

INCLUDE = -I Amateria.hpp -I character.hpp -I Cure.hpp -I Ice.hpp -I Icharacter.hpp -I ImaterialSource.hpp -I MateriaSource.hpp\

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