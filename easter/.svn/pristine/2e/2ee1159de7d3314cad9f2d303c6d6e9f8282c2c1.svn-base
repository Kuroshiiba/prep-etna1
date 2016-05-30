CC	=	gcc
NAME	=	crusader
SRC	=	grille.c			\
		functions_base.c 	\
		parcours.c 			\
		func_lignes.c       \
		func_diagonales.c 	\
		liste.c 			\
		liste_chaine.c 		\
		main.c
CFLAGS	=	-W -Wall -Werror -pedantic -Wextra
OBJ	=	$(SRC:%.c=%.o)

$(NAME):
		$(CC) $(CFLAGS) -L. $(LDFLAGS) $(SRC) -o $(NAME)

all:	$(NAME)

clean:	
		$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all