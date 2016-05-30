/*
** func_lignes.c for crusader in /Users/lacamb_t/Documents/caché
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Tue May  3 16:35:21 2016 LACAMBRA Thomas
** Last update Wed May  4 16:06:52 2016 LACAMBRA Thomas
*/

#include "functions.h"

t_mots	droite(t_grille grille, t_mots *mot, int i, int j)
{
  int	a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a] && j < grille.x)
    {
      a++;
      j++;
    }
  if (mot->word[a] == '\0')
    {
      mot->fin_x = i;
      mot->fin_y = j;
      mot->trouve = 1;
    }
  return (*mot);
}

t_mots  gauche(t_grille grille, t_mots *mot, int i, int j)
{
  int a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a])
    {
      a++;
      j--;
    }
  if (mot->word[a] == '\0')
    {
      mot->fin_x = i;
      mot->fin_y = j;
      mot->trouve = 1;
    }
  return (*mot);
}

t_mots  haut(t_grille grille, t_mots *mot, int i, int j)
{
  int a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a])
    {
      a++;
      i--;
    }
  if (mot->word[a] == '\0')
    {
      mot->fin_x = i;
      mot->fin_y = j;
      mot->trouve = 1;
    }
  return (*mot);
}

t_mots  bas(t_grille grille, t_mots *mot, int i, int j)
{
  int a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a])
    {
      a++;
      i++;
    }
  if (mot->word[a] == '\0')
    {
      mot->fin_x = i;
      mot->fin_y = j;
      mot->trouve = 1;
    }
  return (*mot);
}
