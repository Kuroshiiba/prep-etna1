/*
** functions_base.c for mots_cache in /Users/lacamb_t/Documents/caché
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Wed Apr 27 11:01:27 2016 LACAMBRA Thomas
** Last update Wed Apr 27 11:01:30 2016 LACAMBRA Thomas
*/

#include "functions.h"

void     my_putchar(char c)
{
  write(1, &c, 1);
}

void     my_putstr(char *str)
{
  int    i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i++;
    }
}

int   my_strlen(char *str)
{
  int i;
  
  i = 0;
  while (*(str +i) != '\0')
    i += 1;
  return i;
}

void  my_put_nbr(int nbr)
{
  if (nbr == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nbr < 0)
        {
            my_putchar('-');
            nbr = -nbr;
        }
        if (nbr >= 10)
         my_put_nbr(nbr / 10);
      if (nbr % 10 + 48 >= 58)
         my_putchar(nbr % 10 + 54);
      else  
         my_putchar(nbr % 10 +48);
    }
}
