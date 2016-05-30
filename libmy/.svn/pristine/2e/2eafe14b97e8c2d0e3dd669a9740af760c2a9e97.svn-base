/*
** my_put_nbr.c for my_put_nbr in /home/lacamb_t/Piscine/DEVC/Jour05/my_put_nbr
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Fri Oct  2 14:49:07 2015 LACAMBRA Thomas
** Last update Thu Oct  8 14:53:56 2015 LACAMBRA Thomas
*/
#include<unistd.h>
void    my_putchar(char c);
void    my_putstr(char *str);
void	my_put_nbr(int n)
{
  if (n == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (n < 0)
        {
	  my_putchar('-');
	  n = -n;
        }
      if (n > 9)
        {
          my_put_nbr(n / 10);
	  my_put_nbr(n % 10);
        }
      else
        my_putchar(n + '0');
    }
}
