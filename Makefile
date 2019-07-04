##
## EPITECH PROJECT, 2019
## sbml_parser
## File description:
## advance parser
##

SRC	=	src/main.c	\
		src/error_help.c	\
		src/check_dash.c	\
		src/init_struct.c	\
		src/dash_n.c	\
		src/dash_p.c	\
		src/lib_for_dash.c

OBJ	=	$(SRC:.c=.o)

NAME	=	palindrome

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	re all clean fclean