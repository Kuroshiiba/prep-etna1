/*                                                                                                                                                                                                                                                                            
** basic_utility4.c for Octocat in /Users/gueye_o/Documents/Octocat/gueye_o                                                                                                                                                                                                       
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

void		result(int alive)
{
	if (alive == 1)
		my_putstr("Felicitations pour votre victoire\n");
	else if (alive == -1)
		my_putstr("Vous n'avez pas atteint la sortie!\n");
}

void 		init_mvt()
{
	ftab[get_index('w')] = &up;
	ftab[get_index('a')] = &left;
	ftab[get_index('s')] = &down;
	ftab[get_index('d')] = &right;
}

void		init_inverse_mvt()
{
	ftab[get_index('s')] = &up;
	ftab[get_index('d')] = &left;
	ftab[get_index('w')] = &down;
	ftab[get_index('a')] = &right;
}

int			get_index(char c)
{
	char 	index[4] = {'w','a','s','d'};
	int 	i;

	for (i = 0; i < 4; ++i)
	{
		if (index[i] == c)
			return (i + 1);
	}
	return (0);
}

void 		rotate(char** tab, int s)
{
	int 	i;

    if(s == 14)
     	return ;
    for(i = s; i < 15; i++)
    {
       my_swap(&tab[s][i], &tab[i][s]);
    }
    rotate(tab, s+1);
}
