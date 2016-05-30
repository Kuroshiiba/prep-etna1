CC 		= gcc
NAME 	= my_ls
SRC		= functions_aff.c		\
		my_ls.c					\
		main.c 					\
		function_l.c 			\
		opt.c 					\
		error.c 				\
		my_ls_arg.c 			\
		functions_base.c

OBJ		= $(SRC:%.c=%.o)
RM 		= rm -f
CFLAGS = -W -Werror -Wall -I. -pedantic

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:	$(NAME) clean

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all