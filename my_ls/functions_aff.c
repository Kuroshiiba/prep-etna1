#include "functions.h"

void 	  my_putchar(char c)
{
	write(1, &c, 1);
}

void    my_putstr(char *str)
{
	while (*str)
	{
		my_putchar(*str);
		str++;
	}
}

void    my_put_nbr(int nb)
{
  int	my_div;

  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
  { 
    if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
    my_div = 1;
    while ((nb / my_div) >= 10)
      my_div = my_div * 10;
    while (my_div > 0)
    {
      my_putchar((nb / my_div) + '0');
      nb = nb % my_div;
      my_div /= 10;
    }
  }
}

void    aff(char **argv, int i)
{
  my_putstr(argv[i]);
  my_putstr(":\n");
}
