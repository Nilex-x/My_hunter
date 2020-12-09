##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for do-op
##

SRC			=		src/my_hunter.c \
					src/load_window.c \
					src/flags_help.c \
					src/load_menu.c \
					src/load_pause.c \
					src/sort_button.c \
					src/display.c \
					src/load_crosshair.c \
					src/load_sound.c \
					src/load_game.c \
					src/animate_dog.c \
					src/update_game.c

LIB_PATH	=		lib

NAME_LIB	=		libmy.a

PATH_MAKE	=		lib

BIN_NAME	=		my_hunter

PATH_INCLUDE	=	include

FLAGS_GRAPHIC	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio

all: compil_lib create_bin

compil_lib:
	@make -C $(PATH_MAKE)

create_bin:
	@gcc -o $(BIN_NAME) $(SRC) -L$(LIB_PATH) -I$(PATH_INCLUDE) $(FLAGS_GRAPHIC) -lmy
	@echo "binary create"

clean:
	@make clean -C $(PATH_MAKE)

fclean:
	@make fclean -C $(PATH_MAKE)
	@rm $(BIN_NAME)
	@echo "binary remove"

re: fclean all
