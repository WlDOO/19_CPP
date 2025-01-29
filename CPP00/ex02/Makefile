# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: najeuneh <najeuneh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 14:43:27 by najeuneh          #+#    #+#              #
#    Updated: 2024/11/19 15:30:25 by najeuneh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp\

NAME = account

INCLUDE = -I Account.hpp \

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