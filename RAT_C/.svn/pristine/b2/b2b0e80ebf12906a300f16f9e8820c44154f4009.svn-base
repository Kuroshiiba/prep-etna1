#include "functions.h"

void	aff(t_liste	*list, int	sec, int	tour)
{
	if (tour % 2 != 0)
	{
		sec = tour / 2 + 1;
	}
	else
	{
		sec = tour / 2;
	}
	my_putstr("liste -> ");
	aff_list(list);
	my_putchar('\n');
	sleep(sec);
	system("clear");
	my_putstr("Redonnez la chaine -> ");
}

void	aff_list(t_liste	*list)
{
  t_liste	*tmp;
  
  tmp = list;
  while (tmp != NULL)
    {
      my_putnbr(tmp->chiffre);
      tmp = tmp->next;
    }
}

void	compare_aff(int	tour)
{
  my_putstr("Vous vous êtes trompé vous avez retenu ");
  my_putnbr(tour);
  my_putstr(" chiffre\n");
}
