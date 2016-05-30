#include "functions.h"

int 	my_calc_simple(int *stock)
{
	int 	val1;
	int 	val2;
	int 	result;

	val1 = 0;
	val2 = 0;
	result = 0;
	if (stock[0] > stock[2])
		val1 = stock[0] - stock[2];
	else
		val1 = stock[2] - stock[0];
	if (stock[1] > stock[3])
		val2 = stock[1] - stock[3];
	else
		val2 = stock[3] - stock[1];
	result = val1 + val2;
	return (result);
}

int  **create_tab_ressources(int count)
{
	int		i;
	int		j;
   	int		**stock;
  	int		dim1;

   	dim1 = count;
   	i = 0;
   	j = 0;
   	stock = malloc(dim1 * sizeof(int*));
	while (i < dim1)
	{
		stock[i] = malloc(3 * sizeof(int));
		while (j < 2)
		{
			stock[i][j] = -1;
			stock[i][j] = -1;
			j++;
		}
		j = 0;
		i++;
	}
	return (stock);
}