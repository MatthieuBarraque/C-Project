##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME	 = libmy.a

RM	 = rm -f

INCLUDE	= include/

CC	 = gcc

SRC	= src/

FILES	= my_putchar.c \
			my_putstr.c \
			my_strlen.c \
			my_putnbr.c \
			my_strdup.c \
			my_strcat.c \
			my_strncmp.c \
			my_strncpy.c \
			my_hexadecimale.c \
			my_binaire.c \
			my_octale.c \
			my_getnbr.c \
			my_strcmp.c \
			my_strcpy.c \
			my_strchr.c \
			my_strarray.c \

SRCS		= $(addprefix $(SRC), $(FILES))

OBJ	 = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
