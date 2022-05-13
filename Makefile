##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## project's Makefile
##

CC	=	gcc

SRC	=	src/game/player/movements.c	\
		src/game/player/stats.c	\
		src/game/player/player.c	\
		src/game/display.c	\
		src/game/events.c	\
		src/game/delta_time.c	\
		src/game/game.c	\
		src/window/window.c	\
		src/config/config.c	\
		src/klb.c	\
		src/error_handling.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	klb

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-Iinclude

LIBMY	=	-Llib -lmy

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	libmy $(NAME)

libmy:
	make -C lib/my

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIBMY) $(CSFML)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	make fclean -C lib/my

re:	fclean all

debug:	CFLAGS += -g
debug:	re

.PHONY: all clean fclean re debug
