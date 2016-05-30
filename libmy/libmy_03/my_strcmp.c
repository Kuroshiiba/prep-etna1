/*
** my_strcmp.c for my_strcmp in /home/lacamb_t/Piscine/DEVC/Jour04/lacamb_t/my_strcmp
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Thu Oct  1 13:55:37 2015 LACAMBRA Thomas
** Last update Sat Oct  3 19:02:15 2015 LACAMBRA Thomas
*/

int     my_strcmp(char *s1, char *s2)
{
  int   i;
  
  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] < s2[i])
        return (-1);
      if (s1[i] > s2[i])
	return (1);
      i += 1;
    }
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i]> s2[i])
    return (1);
  return (0);
}
