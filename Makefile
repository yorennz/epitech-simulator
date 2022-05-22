##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## project's Makefile
##

CCC	=	g++

SRC	=	src/main.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	epitech_simulator

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I include

LDFLAGS	=	-L ./lib

LDLIBS	=	-lmy

SFML_FLAGS	=	-lsfml-graphics -lsfml-window -lsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CCC) -o $(NAME) $(OBJ) $(SFML_FLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

debug:	CFLAGS += -g
debug:	re

.PHONY: all clean fclean re debug
