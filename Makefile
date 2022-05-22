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

CPPFLAGS	=	-Wall -Wextra -Iinclude

LDFLAGS	=	-Llib

LDLIBS	=	-lmy

SFMLFLAGS	=	-lsfml-graphics -lsfml-window -lsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CCC) -o $(NAME) $(OBJ) $(SFMLFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

debug:	CPPFLAGS += -g
debug:	re

.PHONY: all clean fclean re debug
