/*                                                                                                                                                                                                                                                                            
** basic_utility2.c for Octocat in /Users/gueye_o/Documents/Octocat/gueye_o                                                                                                                                                                                                       
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

int		my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      i++;
    }
  return (i);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (*(src + i))
    {
      *(dest + i) = *(src + i);
      i++;
    }
  return (dest);
}

char	*my_strdup(char *str)
{
  char	*tab;

  if (str != NULL)
  {
    if ((tab =  malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
      return (NULL);
    else
      return (my_strcpy(tab, str));
  }
  return (NULL);
}

int      get_x(char** lab)
{
  int   i;
  int   j;

   for (i = 0; i < 15; ++i)
   {
      for (j = 0; j < 15; ++j)
      {
         if (lab[i][j] == '8')
            return (j); 
      }
   }
   return (-1);
}

int      get_y(char** lab)
{
  int i;
  int j;

   for (i = 0; i < 15; ++i)
   {
      for (j = 0; j < 15; ++j)
      {
         if(lab[i][j] == '8')
            return (i); 
      }
   }
   return (-1);
}
