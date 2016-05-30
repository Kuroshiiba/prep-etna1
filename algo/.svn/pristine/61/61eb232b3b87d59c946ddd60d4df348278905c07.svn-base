#include "functions.h"

void 	my_win_simple(char **argv, int result, char **my_open, int *stock)
{
	int 	pv;

	pv = my_getnbr(argv[1]);
	if (pv >= result)
	{
		my_putstr("Vous avez gagné cette partie, il suffisait de faire seulement ");
		my_put_nbr(result);
		my_putstr(" pas.\n");
	}
	else
	{
		my_putstr("Vous avez perdu, il fallait marcher ");
		my_put_nbr(result);
		my_putstr(" pas minimum. :(\n");
		my_open = NULL;
		stock = NULL;
		//my_second_chance(argv, my_open, stock);
	}
}

void 	my_second_chance(char **argv, char **my_open, int *stock)
{
	typedef struct 	perso
	{
		int 	pv;
		int 	ressource;
	} 				perso;
	int		**tab;
	int 	*result;
	int 	win;

	win = 0;
	perso player;
	player.pv = my_getnbr(argv[1]);
	player.ressource = my_getnbr(argv[2]);
	tab = my_parse_ressources(my_open);
	result = print_tab_ressources(tab, tab[0][2], stock);
	win = check_result(result, tab[0][2], argv);
	if (win == 1)
		my_putstr("Vous avez gagné en passant par les ressources.\n");
	else if (win == -1)
		my_putstr("Vous avez perdu même en essayant de prendre des ressources.\n");
}

int 	check_result(int *result, int count, char **argv)
{
	int   	i;
	int		ressource;
	int 	val;

	val = 0;
	ressource = my_getnbr(argv[2]);
	i = 0;
	while (i < count)
	{
		if (((result[i] * ressource) > my_getnbr(argv[1])))
			val = 1;
		else
			val = 0;
		i++;
	}
	return (val);
}