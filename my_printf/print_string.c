/*
** print_string.c for my_printf in /Users/lacamb_t/Documents/my_printf
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Fri Apr  8 11:13:30 2016 LACAMBRA Thomas
** Last update Fri Apr  8 11:13:32 2016 LACAMBRA Thomas
*/

#include "functions.h"

int		print_string(va_list ap)
{
	my_putstr(va_arg (ap, char*));
	return (0);
}
