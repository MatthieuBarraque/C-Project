##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c \
		src/my_putstr.c \
		src/my_putchar.c \
		src/my_strlen.c \
		src/my_strdup.c \
		src/algo.c \
		src/my_getnbr.c \
		src/my_putnbr.c \
		src/count.c \
		src/print.c \
		src/addition.c

CFLAGS	= 		-W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

CPPFLAGS =		-I include/

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(CFLAGS) $(OBJ)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean
	all

.PHONY: all fclean clean re
