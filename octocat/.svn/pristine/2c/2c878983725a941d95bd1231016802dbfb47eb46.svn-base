/*                                                                                                                                                                                                                                                                            
** mouvement.c for Octocat in /Users/gueye_o/Documents/pato/Octocat/gueye_o                                                                                                                                                                                                      
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

int up(char	**lab)
{
	if (lab[get_y(lab) - 1][get_x(lab)] == '9' )
	{
		return (1);
	}
	else if (lab[get_y(lab) - 1][get_x(lab)] == 'X' )
	{
		return (-1);
	}
	else
	{
		my_swap(&lab[get_y(lab)][get_x(lab)], &lab[get_y(lab) - 1][get_x(lab)]);
	}
	return (0);
}

int left(char **lab)
{
	if (lab[get_y(lab)][get_x(lab) - 1] == '9' )
	{
		return (1);
	}
	else if (lab[get_y(lab)][get_x(lab) - 1] == 'X' )
	{
			return (-1);
	}
	else
	{
		my_swap(&lab[get_y(lab)][get_x(lab)], &lab[get_y(lab)][get_x(lab) - 1]);
	}
	return (0);
}

int down(char **lab)
{
	if (lab[get_y(lab) + 1][get_x(lab)] == '9' )
	{
		return (1);
	}
	else if (lab[get_y(lab) + 1][get_x(lab)] == 'X' )
	{
			return (-1);
	}
	else
	{
		my_swap(&lab[get_y(lab)][get_x(lab)], &lab[get_y(lab) + 1][get_x(lab)]);
	}
	return (0);
}

int right(char **lab)
{
	if (lab[get_y(lab)][get_x(lab) + 1] == '9' )
	{
		return (1);
	}
	else if (lab[get_y(lab)][get_x(lab) + 1] == 'X' )
	{
		return (-1);
	}
	else
	{
		my_swap(&lab[get_y(lab)][get_x(lab)], &lab[get_y(lab)][get_x(lab) + 1]);
	}
	return (0);
}

void my_swap(char *x, char *y)
{
   char tmp;

	tmp = *x;
    *x = *y;
    *y = tmp;
}
