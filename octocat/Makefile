CC      = gcc
NAME    = octocat
SRC     = main.c 		\
		basic_utility.c \
		basic_utility2.c\
		basic_utility3.c\
		basic_utility4.c\
		mouvement.c 	\
		my_map.c 	\
		game_loop.c 	\
		game_loop2.c 	\
		affichage.c 	\

OBJ     = $(SRC:%.c=%.o)
RM      = rm -f
CFLAGS  = -W -Wall -Werror -Wextra

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all