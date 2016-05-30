CC		= gcc
NAME	= memory
SRC		= 	aff.c 				\
			functions_base.c 	\
			readline.c 			\
			main.c 				\
			verif.c

OBJ		= $(SRC:%.c=%.o)
RM		= rm -f
CFLAGS	= -W -Werror -Wall -pedantic

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:	$(NAME) clean

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all