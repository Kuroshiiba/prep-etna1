#include "functions.h"

void 	my_putchar(char c)
{
	write(1, &c, 1);
}

void 	my_putstr(char *str)
{
	while (*str)
	{
		my_putchar(*str);
		str++;
	}
}

void	my_put_nbr(int nb)
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

int   my_count_ressources(char **tab)
{
   int   i;
   int   j;
   int   count;

   i = 0;
   j = 0;
   count = 0;
   while (tab[i][j])
   {
      while (tab[i][j])
      {
        if (tab[i][j] == '+')
          count++;
        j++;
      }
      j = 0;
      i++;
   }
   return (count);
}