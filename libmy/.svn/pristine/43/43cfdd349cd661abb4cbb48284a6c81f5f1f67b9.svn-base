/*
** my_strdup.c for my_strdup in /home/lacamb_t/Piscine/DEVC/Jour07/lacamb_t/my_strdup
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Mon Oct  5 11:52:11 2015 LACAMBRA Thomas
** Last update Wed Oct  7 20:05:30 2015 LACAMBRA Thomas
*/
#include<unistd.h>
#include<stdlib.h>

char	*my_strcpy(char *dest, char *src);

int	my_strlen(char *str);

char    *my_strdup(char *str)
{
  int   i;
  char *tab;

  while (str[i] != '\0')
    i += 1;
  tab = malloc(i);
  my_strcpy(tab, str);
  return(tab);
}
