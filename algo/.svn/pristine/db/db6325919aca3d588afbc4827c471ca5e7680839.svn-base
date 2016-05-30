CC 		= gcc
NAME 	= solve
SRC		= functions_print.c		\
		functions_str.c		\
		functions_base.c		\
		functions_map.c		\
		functions_start.c		\
		functions_calculs.c 	\
		functions_game.c 	\
		main.c 		\

OBJ		= $(SRC:%.c=%.o)
RM 		= rm -f
CFLAGS = -W -Werror -Wall

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:	$(NAME) clean

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all