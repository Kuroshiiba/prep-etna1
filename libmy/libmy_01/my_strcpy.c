/*
** my_strcpy.c for my_strcpy in /home/lacamb_t/Piscine/DEVC/Jour04/lacamb_t/my_strcpy
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Thu Oct  1 11:21:18 2015 LACAMBRA Thomas
** Last update Wed Oct  7 20:32:21 2015 LACAMBRA Thomas
*/

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i += 1;
    }
  dest[i] = '\0';
  return (dest);
}
