#include "functions.h"

t_mots  bas_gauche(t_grille grille, t_mots *mot, int i, int j)
{
  int a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a])
    {
      a++;
      i++;
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

t_mots  bas_droite(t_grille grille, t_mots *mot, int i, int j)
{
  int a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a])
    {
      a++;
      j++;
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

t_mots  haut_gauche(t_grille grille, t_mots *mot, int i, int j)
{
  int a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a])
    {
      a++;
      j--;
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

t_mots  haut_droite(t_grille grille, t_mots *mot, int i, int j)
{
  int a;

  a = 0;
  mot->debut_x = i;
  mot->debut_y = j;
  while (mot->word[a] != '\0' && grille.tab[i][j] == mot->word[a])
    {
      a++;
      i--;
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
