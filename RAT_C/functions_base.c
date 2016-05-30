#include "functions.h"

void	my_putchar(char	c)
{
  write(1,&c,1);
}

void	my_putstr(char	*str)
{
  int	i;
  
  i = 0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_putnbr(int	nbr)
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
        my_putnbr(nbr / 10);
      if (nbr % 10 + 48 >= 58)
        my_putchar(nbr % 10 + 54);
      else
        my_putchar(nbr % 10 + 48);
    } 
}

int	my_strlen(char *str)
{
  int	i;
  
  i = 0;
  while (*(str +i) != '\0')
    i += 1;
  return i;
}

int   solo_random()
{
  int a;
  
  srand(time(NULL));
  a = rand()%(0-10);
  return (a);
}
