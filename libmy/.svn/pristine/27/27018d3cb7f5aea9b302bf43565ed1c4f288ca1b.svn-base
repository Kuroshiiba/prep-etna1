/*
** my_strncpy.c for my_strncpy in /home/lacamb_t/Piscine/DEVC/Jour04/lacamb_t/my_strncpy
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Thu Oct  1 11:49:02 2015 LACAMBRA Thomas
** Last update Sat Oct  3 17:21:41 2015 LACAMBRA Thomas
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i != n && src[i] != '\0')
    {
      dest[i] = src[i];
      i += 1;
    }
  if (i < n)
    {
      while (dest[i] != '\0')
	{
	  dest[i] = '\0';
	  i += 1;
	}
    }
  return (dest);
}
