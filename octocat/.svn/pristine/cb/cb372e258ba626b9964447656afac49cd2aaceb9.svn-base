/*                                                                                                                                                                                                                                                                            
** main.c for Octocat in /Users/gueye_o/Documents/pato/Octocat/gueye_o                                                                                                                                                                                                      
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

void		init_game()
{
	fmenu[0] = &main_loop_normal;
	fmenu[1] = &main_loop_hard;
	fmenu[2] = &main_loop_blind;
	fmenu[3] = &main_loop_octo;
	fmenu[4] = &main_loop_inverse;
	fmenu[5] = &main_loop_rotate;
	fmenu[6] = &quit;
	menu();
}

char		*choice()
{
	char	input;
	char	*map[3];

	input = 'o';
	map[0] = "lab1.txt";
	map[1] = "lab_medium.txt";
	map[2] = "lab_hard.txt";
	while(input - 49 < 0 || input - 49 > 2)
	{
		my_putstr("\033cChoisissez une map\n1)labyrinthe facile\n");
		my_putstr("2)labyrinthe moyen\n3)labyrinthe difficile\n");
		input = getchar();
		vider_buffer();
		if(input - 49 >= 0 && input - 49 < 3)
			return(map[input - 49]);
		else
			my_putstr("Choix incorrect\n");
		sleep(1);
	}
	return(map[input - 49]);
}

void		menu()
{
	char	c;

	c = '1';
	while (c - 48 > 0  && c - 48 < 6)
	{
		accueil();
		init_mvt();
		my_putstr("Choisissez un mode de jeu:\n1)Mode normal\t");
		my_putstr("2)Mode hardcore\n3)Mode blind\t4)Mode octo\n");
		my_putstr("5)Mode inverse\t6)Mode rotation\n7)Quitter\n?:>");
		c = getchar();
		vider_buffer();
		my_putstr("\033c");
		if (c - 49 >= 0 && c - 49 < 6)
			c = (*(fmenu[c - 49]))(choice());
		else if (c - 48 == 7)
			(*(fmenu[c - 49]))("lol");
		else
			my_putstr("Choix indisponible\n");
	}
	my_putstr("Merci d'avoir joué à Octocat\n");
}

int 		main()
{
	init_game();
	return (0);
}
