##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME = generator
MAP = maze.txt

IDIR = include/
IDIR_MY	= lib/my/include/

LIB	= libmy.a
LNAME = my
LDIR = lib/my

DIR	= src/

FILES = main.c \
		generation.c \
		free.c \
		init.c \
		put_txt.c \
		generation_i.c \

SRCS = $(addprefix $(DIR), $(FILES))

OBJS = $(SRCS:.c=.o)

all: $(LIB) $(NAME)

$(LIB):
	make -C $(LDIR)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS) -L $(LDIR) -l $(LNAME) -g3

clean:
	rm -f $(OBJS)
	make -C $(LDIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(MAP)
	make -C $(LDIR) fclean

re: fclean all

.PHONY: all clean fclean re
