/*                                                                                                                                                                                                                                                                            
** game_loop2.c for Octocat in /Users/gueye_o/Documents/Octocat/gueye_o                                                                                                                                                                                                       
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

char		main_loop_inverse(char *choice)
{
	char	a;
	int 	alive;
	char	**lab;

	alive = 0;
	lab = read_lab(choice);
	while (alive == 0)
	{
		init_inverse_mvt();
		my_aff_lab(lab);
		my_putstr("Entrez un mouvement: \n");
		a = getchar();
		vider_buffer();
		if (get_index(a) > 0 && get_index(a) <= 4)
			alive = (*(ftab[get_index(a)]))(lab);
		else
			{
				my_putstr("Entrée incorrecte\n");
				main_loop_inverse(choice);
			}
	}
	if (alive == 1)
		my_putstr("Felicitations pour votre victoire\n");
	else
		my_putstr("Boom vous avez perdu\n");
	free_lab(lab);
	init_mvt();
	replay(choice, 4);
	return ('1');
}

char		main_loop_rotate(char *choice)
{
	char	a;
	int 	alive;
	char	**lab;

	alive = 0;
	lab = read_lab(choice);
	while (alive == 0)
	{
		my_aff_lab(lab);
		my_putstr("Entrez un mouvement: \n");
		a = getchar();
		vider_buffer();
		if (get_index(a) > 0 && get_index(a) <= 4)
			alive = (*(ftab[get_index(a)]))(lab);
		else
			{
				my_putstr("Entrée incorrecte\n");
				main_loop_normal(choice);
			}
		rotate(lab, 0);
	}
	if (alive == 1)
		my_putstr("Felicitations pour votre victoire\n");
	else
		my_putstr("Boom vous avez perdu\n");
	free_lab(lab);
	replay(choice, 5);
	return ('1');
}
