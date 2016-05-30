CC		= gcc
NAME	= forza
SRC		= main.c

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