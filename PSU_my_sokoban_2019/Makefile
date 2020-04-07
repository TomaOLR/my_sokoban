##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Thomas Olry's Makefile made the 11/25/2019
##

SRC	=	srcs/main.c			\
		srcs/sokoban.c			\
		srcs/moving.c			\
		srcs/move.c			\
		srcs/handling_error.c		\
		srcs/check_map.c		\

CC	=	gcc -o

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror  -I./include/ -L./lib/my -lmy

LDFLAGS	=	-lncurses

NAME	=	my_sokoban

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	@echo -e "\e[44;1m----------------THATS WORK !!!----------------\e[0m"

clean:
	make clean -C lib/my
	rm -rf $(OBJ)

fclean:	clean
	make fclean -C lib/my
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
