/*
** my_getnbr.c for my_getnbr in /home/lacamb_t/Piscine/DEVC/Jour05/lacamb_t/my_getnbr
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Sat Oct  3 14:34:51 2015 LACAMBRA Thomas
** Last update Tue Oct  6 20:44:17 2015 LACAMBRA Thomas
*/
int	my_getnbr(char *str)
{
  int	i;
  int	j;
  int	nb;
  
  i = 0;
  j = 1;
  nb = 0;
  if (!str)
    return (0);
  while (str[i] != '\0')
    {
      while (str[i] == '-' || str[i] == '+')
	{
	  if (str[i] == '-')
	      j = j * (-1);
	  else
	      j = j * 1;
	  i+= 1;
	}
      while (str[i] >= '0' && str[i] <= '9')
	{
	  nb = nb * 10 + (str[i] - '0');
	  i++;
	}
      if (str[i])
	i += 1;
    }
  return (nb * j);
}
