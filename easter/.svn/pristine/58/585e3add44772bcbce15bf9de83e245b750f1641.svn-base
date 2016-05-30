#include "functions.h"

char *read_mots(char *dossier)
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

t_mots  *crea_mots(char *content, t_mots *ma_liste, int  i)
{
  char  *mot_a_mettre;
  int   k;
  int   premier;

  premier = 0;
  k = 0;
  
  while (k < my_strlen(content))
  {
    mot_a_mettre = malloc(sizeof(char) * 100);
    if (content[k] != '\n')
    {
      mot_a_mettre[i] = content[k];
      k++;
      i++;
    }
    else
    {
      k++;
      mot_a_mettre[i] = '\0';
      if (premier == 0)
      {
        ajouter_Premier_Mot(ma_liste, mot_a_mettre);
        i = 0;
        premier++;
      }
      else
      {
        ajouter_Mot_Fin(ma_liste, mot_a_mettre);
        i = 0;
      }
    }
    free(mot_a_mettre);
  }
  free(content);
  return (ma_liste);
}

t_mots *exec_mots(char *liste, t_mots *ma_liste)
{
  int i;
  char *str_mots;
  t_mots *mon_mot;

  i = 0;
  str_mots = read_mots(liste);
  mon_mot = crea_mots(str_mots, ma_liste, i);
  return (mon_mot);
}
