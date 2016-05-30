/*
** parcours.c for crusader in /Users/lacamb_t/Documents/caché
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Tue May  3 16:09:09 2016 LACAMBRA Thomas
** Last update Wed May  4 16:25:05 2016 LACAMBRA Thomas
*/

#include "functions.h"

void	first_letter(t_grille grille, t_mots *mot)
{
  int	i;
  int	j;
  
  for (i = 0; i < grille.x; i++)
    {
      for (j = 0; j < grille.y; j++)
        {
      	  if (mot->word[0] == grille.tab[i][j])
      	    {
      	      second_letter_one(grille, mot, i, j);
      	      second_letter_two(grille, mot, i, j);
      	    }
        }
    }
}

void	second_letter_one(t_grille grille, t_mots *mot, int i, int j)
{
  if ((j < grille.y) && (mot->word[1] == grille.tab[i][j + 1] && mot->trouve != 1))
    droite(grille, mot, i ,j);
 if ((j > 0) && (mot->word[1] == grille.tab[i][j - 1] && mot->trouve != 1))
    gauche(grille, mot, i ,j);
if ((i > 0) && (mot->word[1] == grille.tab[i - 1][j] && mot->trouve != 1))
      haut(grille, mot, i ,j);
if ((i < grille.x) && (mot->word[1] == grille.tab[i + 1][j] && mot->trouve != 1))
    bas(grille, mot, i ,j);
}

void	second_letter_two(t_grille grille, t_mots *mot, int i, int j)
{
  if ((j > 0) && (i < grille.x) && (mot->word[1] == grille.tab[i + 1][j - 1] && mot->trouve != 1))
    bas_gauche(grille, mot, i ,j);
  if ((i < grille.x) && (j < grille.y) && (mot->word[1] == grille.tab[i + 1][j + 1] && mot->trouve != 1))
    bas_droite(grille, mot, i ,j);
  if ((j > 0) && (i > 0) && (mot->word[1] == grille.tab[i - 1][j - 1] && mot->trouve != 1))
    haut_gauche(grille, mot, i ,j);
  if ((i > 0) && (j < grille.y) && (mot->word[1] == grille.tab[i - 1][j + 1] && mot->trouve != 1))
    haut_droite(grille, mot, i ,j);
}
