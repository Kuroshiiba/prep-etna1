#include "functions.h"

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

int	my_strlen(char *str)
{
  int	i;
  
  i = 0;
  while (*(str +i) != '\0')
    i += 1;
  return i;
}

int	my_tablen(char* tab[])
{
  int	i;
  i = 0;
  while (tab[i] != '\0')
    i++;
  return (i);
}
