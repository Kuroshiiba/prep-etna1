#include "functions.h"

t_liste *debut_element(t_liste *numero, int nb)
{
  t_liste *nouveau;
  
  nouveau = malloc(sizeof(t_liste));
  if (nouveau == NULL)
    return (NULL);
  nouveau->chiffre = nb;
  nouveau->next = numero; 
  return (nouveau);
}

t_liste *fin_element(t_liste *numero, int nb)
{
  t_liste *nouveau;
  t_liste *tmp;
  
  tmp = numero;
  nouveau = malloc(sizeof(t_liste));
  if (nouveau == NULL)
    return (NULL);
  nouveau->chiffre = nb;
  nouveau->next = NULL;
  if (numero == NULL)
    return (nouveau);
  while (tmp->next != NULL)
    {
      tmp = tmp->next;
    }
  tmp->next = nouveau;
  return (numero);
}

int	game(t_liste *numero, char  *read, int sec, int tour)
{
  numero = fin_element(numero, solo_random());
  aff(numero, sec, tour);
  read = readLine();
  while (gestion_err(read) != 0)
    {
      my_putstr("Redonnez la chaine -> ");
      read = readLine();
      gestion_err(read);
    }
  if (compare_list(numero, read, tour) == 1)
    {
      return (1);
    }
  return 0;
}

char 	*reaad()
{	
  char	*read;
  
  my_putstr("Redonnez la chaine -> ");
  read = readLine();
  gestion_err(read);
  return(read);
}

int 	main()
{
  t_liste	*numero;
  char		*read;
  int		sec;
  int		tour;
  
  tour = 1;
  sec = 0;
  numero = NULL;
  numero = debut_element(numero, solo_random());
  aff(numero, sec, tour);
  read = readLine();
  while (gestion_err(read) != 0)
    {
      read = reaad();
    }
  if (compare_list(numero, read, tour) == 1)
    {
      return 0;
    }
  while(game(numero, read, sec, tour) == 0)
    {
      tour++;
    }
  free(read);
  return 0;
}
