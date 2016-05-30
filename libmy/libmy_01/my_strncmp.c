/*
** my_strncmp.c for my_strncmp in /home/lacamb_t/Piscine/DEVC/Jour04/lacamb_t/my_strncmp
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Thu Oct  1 15:01:04 2015 LACAMBRA Thomas
** Last update Sat Oct  3 19:32:44 2015 LACAMBRA Thomas
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  
  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (i < n)
	{
	  if (s1[i] < s2[i])
	    return (-1);
	  if (s1[i] > s2[i])
	    return (1);
	  i += 1;
	}
    }
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i]> s2[i])
    return (1);
  return (0);
}
