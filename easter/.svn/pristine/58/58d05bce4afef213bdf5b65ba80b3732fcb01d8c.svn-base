/*
** main.c for crusader in /Users/lacamb_t/Documents/caché
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Mon May  2 12:00:30 2016 LACAMBRA Thomas
** Last update Tue May  3 17:22:09 2016 LACAMBRA Thomas
*/

#include "functions.h"

int      main(int argc, char *argv[])
{
  char  *grille;
  char  *liste;
  t_grille    *ma_grille;
  t_mots    *ma_liste;
  
  if ((ma_grille = malloc(sizeof(t_grille*) + 1)) == NULL)
    return (0);
  if ((ma_liste = malloc(sizeof(t_mots*) + 1)) == NULL)
    return (0);
  if (argc == 3)
    {
      grille = argv[1];
      liste = argv[2];
      ma_grille = exec_grille(grille, ma_grille);      
      ma_liste = exec_mots(liste, ma_liste);
      while (ma_liste)
      {
        first_letter(*ma_grille, ma_liste);
        if (ma_liste->trouve == 1)
          affichage(ma_liste);
        else
          my_putstr("Not found\n");
        ma_liste = ma_liste->next;
      }

    }
  else
    {
      my_putstr("Veuillez rajouter 2 arguments:\n -Le nom du fichier de");
      my_putstr(" la grille\n -Le nom du fichier des mots a trouver\n");
    }
  return (0);
}


void affichage (t_mots    *ma_liste)
{
  my_putstr(ma_liste->word);
  my_putstr("["); 
  my_put_nbr(ma_liste->debut_x);
  my_putstr(".");
  my_put_nbr(ma_liste->debut_y);
  my_putstr("/");
  my_put_nbr(ma_liste->fin_x);
  my_putstr(".");
  my_put_nbr(ma_liste->fin_y);
  my_putstr("]\n");
}
