/*
** grille.c for crusader in /Users/lacamb_t/Documents/caché
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Mon May  2 11:59:35 2016 LACAMBRA Thomas
** Last update Tue May  3 10:50:11 2016 LACAMBRA Thomas
*/

#include "functions.h"

void malloc_tab(t_grille *ma_grille)
{
  int a;
  a = 0;
  ma_grille->tab = malloc(sizeof(char *) * ma_grille->x);
  while (a < ma_grille->x)
    {
      ma_grille->tab[a] = malloc(sizeof(char) * ma_grille->y);
      a++;
    }
}

char *read_grille(char *dossier)
{
  int handle;
  int size;
  char *content;
  
  if (!(content = malloc(1000 * sizeof(char))))
    return (0);
  if (!(handle = open(dossier, O_RDONLY)))
  {
    my_putstr("le fichier de la grille est incorrect\n");
    return (0);
  }
  size = read(handle, content, 225 * sizeof(char));
  close(handle);
  content[size] = '\0';
  return (content);
}

t_grille  *crea_grille(char *content, t_grille *ma_grille, int  i)
{
  int      j;
  int      k;
  
  j = 0;
  k = 0;
  while (k < my_strlen(content))
    {
      if (content[k] != '\n')
	     {
	       ma_grille->tab[i][j] = content[k];
	       i++;
	     }
      else
	     {
	       k++;
	       j++;
	       i = 0;
	       ma_grille->tab[i][j] = content[k];
	     }
      k++;
    }
  i++;
  ma_grille->tab[i][j] = '\0';  
  free(content);
  return (ma_grille);
}

int taille_grille(char   *content, t_grille *ma_grille)
{
  int   i;
  int   j;
  
  i = 0;
  j = my_strlen(content);
  while (content[i] != '\n')
    {
      i++;
    }
  j = j / i;
  j--;
  ma_grille->x = i;
  ma_grille->y = j;
  return (1);
}

t_grille  *exec_grille(char *grille, t_grille *ma_grille)
{
  int i;
  char *str_grille;
  t_grille *grande_grille;

  i = 0;
  str_grille = read_grille(grille);
  taille_grille(str_grille, ma_grille);
  malloc_tab(ma_grille);
  grande_grille = crea_grille(str_grille, ma_grille, i);
  return (grande_grille);
}
