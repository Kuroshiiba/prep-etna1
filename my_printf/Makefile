CC 		= gcc

SRC		= function_base.c 		\
		my_printf.c 			\
		print_string.c 			\
		print_decimal.c 		\
		print_char.c			\
		print_octal.c 			\
		print_hexa.c 			\
		print_Hexadecimal.c 	\
		print_percent.c

OBJ		= 	$(SRC:%.c=%.o)

RM 		= 	rm -f

CFLAGS  = 	-W -Werror -Wall -fPIC

Static	= 	libmy_printf_`uname -m`-`uname -s`.a

Dynamic = 	libmy_printf_`uname -m`-`uname -s`.so

name : 	my_printf_static \
			my_printf_dynamic

my_printf_static:	$(OBJ)
				ar r $(Static) $(OBJ)
				ranlib $(Static)

my_printf_dynamic: $(OBJ)
				$(CC) $(CFLAGS) -shared $(OBJ) -o $(Dynamic)

all:	my_printf_static my_printf_dynamic

clean:
		$(RM) *.o

fclean:		clean
		$(RM) $(Static) $(Dynamic)

re:		fclean all

.PHONY: my_printf_static my_printf_dynamic all clean fclean re