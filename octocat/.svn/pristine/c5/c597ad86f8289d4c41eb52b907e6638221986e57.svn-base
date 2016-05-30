/*                                                                                                                                                                                                                                                                            
** basic_utility.c for Octocat in /Users/gueye_o/Documents/Octocat/gueye_o                                                                                                                                                                                                       
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i++;
    }
}

char    quit(char *choice)
{
  choice = "";
  return ('q');
}

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

