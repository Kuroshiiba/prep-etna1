/*
** function_base.c for my_printf in /Users/lacamb_t/Documents/my_printf
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Fri Apr  8 11:11:07 2016 LACAMBRA Thomas
** Last update Fri Apr  8 11:15:39 2016 LACAMBRA Thomas
*/

#include "functions.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;
  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar (*(str + i));
      i += 1;
    }
}

void  my_put_nbr_base(int nbr, int base)
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
        if (nbr >= base)
			my_put_nbr_base(nbr/base, base);
		if (nbr%base+48 >= 58)
			my_putchar(nbr%base+54);
		else	
			my_putchar(nbr%base+48);
    }
}

void  print_nbr_hexa(int nbr, int base)
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
        if (nbr >= base)
			print_nbr_hexa(nbr/base, base);
		if (nbr%base+48 >= 58)
			my_putchar(nbr%base+87);
		else	
			my_putchar(nbr%base+48);
    }
}

void  print_nbr_Hexa(int nbr, int base)
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
        if (nbr >= base)
			print_nbr_Hexa(nbr/base, base);
		if (nbr%base+48 >= 58)
			my_putchar(nbr%base+55);
		else	
			my_putchar(nbr%base+48);
    }
}
