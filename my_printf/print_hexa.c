/*
** print_hexa.c for my_printf in /Users/lacamb_t/Documents/my_printf
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Fri Apr  8 11:14:00 2016 LACAMBRA Thomas
** Last update Fri Apr  8 11:14:02 2016 LACAMBRA Thomas
*/

#include "functions.h"

int  print_hexa(va_list ap)
{
  print_nbr_hexa(va_arg (ap, int), 16);
  return (0);
}
