##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

GEN = generator/
SOL = solver/

all : $(OBJ)
		make -C $(GEN)
		make -C $(SOL)

clean :
		make clean -C $(GEN)
		make clean -C $(SOL)

fclean : clean
		make clean -C $(GEN)
		make clean -C $(SOL)

re : fclean all

.PHONY : all clean fclean re
