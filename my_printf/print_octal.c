/*
** print_octal.c for my_printf in /Users/lacamb_t/Documents/my_printf
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Fri Apr  8 11:10:32 2016 LACAMBRA Thomas
** Last update Fri Apr  8 11:15:22 2016 LACAMBRA Thomas
*/

#include "functions.h"

int     print_octal(va_list ap)
{
  my_put_nbr_base(va_arg (ap, int), 8);
  return (0);
}
