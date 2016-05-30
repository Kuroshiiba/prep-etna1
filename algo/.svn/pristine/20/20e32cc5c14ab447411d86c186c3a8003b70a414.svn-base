#include "functions.h"

void 	my_start(char **argv)
{
		char	**my_open;
		int 	*stock;
		int 	result;

		my_open = read_file(argv[3]);
		if (my_open[0][0] != 'N' && my_open[0][0] != 'J')
		{
			stock = my_parse_tab(my_open);
			result = my_calc_simple(stock);
			my_win_simple(argv, result, my_open, stock);
		}
		else if (my_open[0][0] == 'N')
			my_putstr("Erreur: impossible d'ouvrir le fichier.\n");
		else if (my_open[0][0] == 'J')
			my_putstr("Erreur: Le fichier est trop grand.\n");
}