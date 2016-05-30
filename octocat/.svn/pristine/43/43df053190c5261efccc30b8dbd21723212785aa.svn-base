/*                                                                                                                                                                                                                                                                            
** game_loop.c for Octocat in /Users/gueye_o/Documents/Octocat/gueye_o                                                                                                                                                                                                       
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

char		main_loop_normal(char *choice)
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
	}
	if (alive == 1)
		my_putstr("Felicitations pour votre victoire\n");
	else
		my_putstr("Boom vous avez perdu\n");
	free_lab(lab);
	replay(choice, 0);
	return ('1');
}

char		main_loop_blind(char *choice)
{
	char	a;
	int 	alive;
	char	**lab;

	lab = read_lab(choice);
	my_aff_lab(lab);
	sleep(1);
	alive = 0;
	while (alive == 0)
	{
		my_aff_blind_lab(lab);
		my_putstr("Entrez un mouvement: \n");
		a = (getchar());
		vider_buffer();
		if (get_index(a) > 0 && get_index(a) <= 4)
			alive = (*(ftab[get_index(a)]))(lab);
		else
			{
				my_putstr("Entrée incorrecte\n");
				sleep(1);
			}
	}
	if (alive == -1)
		my_putstr("Vous avez touché un mur\n");
	else
		my_putstr("Felicitations pour votre victoire\n");
	free_lab(lab);
	replay(choice, 2);
	return ('1');
}

char		main_loop_hard(char *choice)
{
	char	*input;
	int 	alive;
	char	**lab;
	int 	i;

	i = 0;
	lab = read_lab(choice);
	my_aff_lab(lab);
	my_putstr("Entrez un chemin: \n");
	input = get_str();
		while (input[i] != '\0' && strcmp(input, "quit") != 0)
		{
			my_aff_lab(lab);
			if (get_index(input[i]) > 0 && get_index(input[i]) <= 4)
				alive = (*(ftab[get_index(input[i])]))(lab);
			else
			{
				my_putstr("Chemin incorrect\n");
				input = "quit";
			}
			usleep(200000);
			i++;
		}
	result(alive);
	free_lab(lab);
	replay(choice, 1);
	return ('1');
}


char		main_loop_octo(char *choice)
{
	char	a;
	int 	alive;
	char	**lab;

	alive = 0;
	lab = read_lab(choice);
	while (alive == 0)
	{
		octoview(lab);
		my_putstr("Entrez un mouvement: \n");
		a = getchar();
		vider_buffer();
		if (get_index(a) > 0 && get_index(a) <= 4)
			alive = (*(ftab[get_index(a)]))(lab);
		else
			{
				my_putstr("Entrée incorrecte\n");
				main_loop_octo(choice);
			}
	}
	if (alive == 1)
		my_putstr("Felicitations pour votre victoire\n");
	else
		my_putstr("Boom vous avez perdu\n");
	free_lab(lab);
	replay(choice, 3);
	return ('1');
}

