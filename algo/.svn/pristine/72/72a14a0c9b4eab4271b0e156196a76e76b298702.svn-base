#include "functions.h"

int 	main(int argc, char **argv)
{
	int pv;
	int resources;

	if (argc == 4)
	{
		pv = my_getnbr(argv[1]);
		resources = my_getnbr(argv[2]);
		if (pv >= 1 && pv < 10000)
		{
			if (resources >= 0 && resources <= 15)
			{
				my_start(argv);
			}
			else
				my_putstr("Le nombre de ressource doit être compris entre 0 et 15.\n");
		}
		else
			my_putstr("Les points de vie du personnage doivent être compris entre 0 et 10000.\n");
	}
	else
			my_putstr("Il faut avoir trois arguments après le nom du fichier (le nombre de PV, de ressources et la carte).\n");
	return (0);
}