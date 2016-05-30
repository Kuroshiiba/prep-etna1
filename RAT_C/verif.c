#include "functions.h"

int	compare_list(t_liste *list, char  *str, int tour)
{
  t_liste *tmp;
  int	  i;
  
  i = 0;
  tmp = list;
  while (tmp != NULL)
    {
      if (tmp->chiffre == str[i] - 48)
	{
	  tmp = tmp->next;
	  i++;
	}
      else
	{
	  compare_aff(tour);
	  return (1);
	}
    }
  if (taille(i, str, tour) != 0)
    return (1);
  return (0);
}

int	taille(int  i, char  *str, int tour)
{
  if (my_strlen(str) == i)
    {
      return (0);
    }
  else
    {
      my_putstr("Vous vous êtes trompé vous avez retenu ");
      my_putnbr(tour);
      my_putstr(" chiffre\n");
      return (1);
    }
  return (0);
}

int	gestion_err(char	*ok)
{
  int	i;
  int	test;
  
  i = 0;
  test = 0;
  while (ok[i] != '\0')
    {
      test = ok[i];
      if (test >= 48 && test <= 58)
	{
	  i++;
	}
      else
	{
	  my_putstr("Veuillez taper seulement des chiffres\n");
	  return (1);
	}
    }
  return (0);
}
