/*
** my_printf.c for my_printf.c in /Users/lacamb_t/Documents/my_printf
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Fri Apr  8 11:11:27 2016 LACAMBRA Thomas
** Last update Fri Apr  8 11:11:29 2016 LACAMBRA Thomas
*/

#include "functions.h"

int 	tab_func(va_list ap, char a)
{
	int		j;
	char 	*options_l;
	int		(*options[8])(va_list);

	j = 0;
	options_l = "scidoxX%";
	options[0] = &print_string;
	options[1] = &print_char;
	options[2] = &print_decimal;
	options[3] = &print_decimal;
	options[4] = &print_octal;
	options[5] = &print_hexa;
	options[6] = &print_Hexadecimal;
	options[7] = &print_percent;
	while (*(options_l + j) != '\0')
		{
			if (*(options_l + j) == a)
			{
				options[j](ap);
			}
			j++;
		}
		return (0);
}

int		my_printf(char *str, ...)
{
	va_list 	ap;
	int			i;

	i = 0;
	va_start(ap, str);
	while(*(str + i) != '\0')
	{
		if (*(str + i) == '%')
		{
			i++;
			tab_func(ap, *(str + i));
		}
		else
			my_putchar(*(str + i));
		i++;
	}
	va_end(ap);
	return (0);
}
