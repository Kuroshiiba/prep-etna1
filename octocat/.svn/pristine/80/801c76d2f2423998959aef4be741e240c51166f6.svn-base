/*                                                                                                                                                                                                                                                                            
** basic_utility3.c for Octocat in /Users/gueye_o/Documents/Octocat/gueye_o                                                                                                                                                                                                       
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

void 		free_lab(char **lab)
{
	int		i;

   for (i = 0; i < 15; ++i)
   {
      free(lab[i]);
   }
   free(lab);
}

void 		vider_buffer()
{
	int 	c;

	c = 0;
	while (c != '\n' && c != EOF)
	{
		c = (getchar());
	}
}

int			distance(int x1, int x2, int y1, int y2)
{
	if (absolute(x1 - x2) > 1 || absolute(y1 - y2) > 1)
		return (0);
	return (1);
}

int			absolute(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
}

void		replay(char *choice, int i)
{
	char	input;

	input = ' ';
	while(input != 'o' && input != 'n')
	{
		my_putstr("Voulez-vous recommencer?(o/n)\n");
		input = getchar();
		vider_buffer();
	}
	if (input == 'o')
		(*(fmenu[i]))(choice);
}


