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

char		*get_str()
{
	char	*input;
	int 	i;
	char	a;

  i = 0;
  if ((input = malloc(sizeof(*input) * (50 + 1))) == NULL)
    return (NULL);
  while((a = getchar()) != '\n')
  {
    input[i] = a;
    i++;
  }
  input[i] = '\0';
  return (input);
}