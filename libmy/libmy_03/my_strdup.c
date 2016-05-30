/*
** my_strdup.c for my_strdup in /home/lacamb_t/Piscine/DEVC/Jour07/lacamb_t/my_strdup
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Mon Oct  5 11:52:11 2015 LACAMBRA Thomas
** Last update Tue Oct 13 11:24:41 2015 LACAMBRA Thomas
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
  if (tab == NULL)
    return;
  my_strcpy(tab, str);
  return(tab);
}
