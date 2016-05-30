/*
** my_str_wordtab.c for my_str_to_wordtab in /home/lacamb_t/Piscine/DEVC/Jour07/lacamb_t/my_str_to_wordtab
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Wed Oct  7 11:32:57 2015 LACAMBRA Thomas
** Last update Wed Oct  7 20:50:24 2015 LACAMBRA Thomas
*/
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void    my_putchar(char c);
char    *my_strcpy(char *dest, char *src);
char    *my_strdup(char *str);
int	my_strlen(char *str);
char	*my_strncat(char *str1, char *str2, int n);

int	my_alphanum(char str)
{
  if ((str >= '0' && str <= '9') ||
      (str >= 'a' && str <= 'z') ||
      (str >= 'A' && str <= 'Z'))
    return (0);
  else
    return (1);
}
char	**my_str_to_wordtab(char *str)
{
  char	**result;
  char	*bot;
  int	top;
  int	mid;
  int	i;

  mid = 0;
  i = 0 ;
  top = 0;
  result = malloc(my_strlen(str) * sizeof (char*));
  if (result == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      top = i;
      while (my_alphanum(str[top]) == 0)
	top += 1;
      if (str[top] == '\0')
	{
	  result[mid] = NULL;
	  return (result);
	}
      i = top;
      while (my_alphanum(str[top]) == 1)
	top += 1;
      bot = malloc((top - i + 1) * sizeof (char));
      if (bot == NULL)
	return (NULL);
      my_strncat(bot, &str[i], (top - i));
      result[mid] = my_strdup(bot);
      mid++;
      i = top +1;
    }
  result[mid] = NULL;
  return (result);
}
