/*                                                                                                                                                                                                                                                                            
** my_map.c for Octocat in /Users/gueye_o/Documents/pato/Octocat/gueye_o                                                                                                                                                                                                      
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/

#include "fonction.h"

void     my_aff_lab(char** lab)
{
   int   i;
   int   j;

   i = 0;
   j = 0;
   my_putstr("\033c");
   while(i != 15)
   {
      while(j != 15)
      {
         my_putchar(lab[i][j]);
         j++;  
      }
      my_putchar('\n');
      j = 0;
      i++;
   }
}


void     my_aff_blind_lab(char** lab)
{
   int   i;
   int   j;

   i = 0;
   j = 0;
   my_putstr("\033c");
   while(i != 15)
   {
      while(j != 15)
      {
         if (lab[i][j] == '8')
            my_putchar(lab[i][j]);
         else
            my_putchar(' ');
         j++;  
      }
      my_putchar('\n');
      j = 0;
      i++;
   }
}

char     **create_lab(char *str)
{
   int   i;
   int   j;
   int   c;
   char  **lab;

   c = 0;
   if (!(lab = malloc(15 * sizeof(char *))))
      return (NULL);
   for (i = 0; i < 15; i++)
   {
      if (!(lab[i] = malloc(15 * sizeof(char))))
         return (NULL);
      for (j = 0; j < 15; j++)
      {
         if (str[c] == '\n')
            c++;
         lab[i][j] = str[c];
         c++;
      }
      lab[i][j] = '\0';
   }
   return (lab);
}

char**     read_lab(char *file) //lis le contenu du ficher et ressort dans contente en string complete
{
   int   handle;
   int   size;
   char  *content;
   char **lab;

   if (!(content = malloc((15 + 1)  * 15 * sizeof(char))))
    exit(0);
   handle = open(file, O_RDONLY);
   size = read(handle, content, 239 * sizeof(char));
   close(handle);
   //content[size - 1] = '\0';
   lab = create_lab(content); // fonction creer tableaux
   free(content);
   return (lab);
}

void       octoview(char **lab)
{
   int   i;
   int   j;

   i = 0;
   j = 0;
   my_putstr("\033c");
   while(i != 15)
   {
      while(j != 15)
      {
         if(distance(i, get_y(lab), j, get_x(lab)) == 1 || lab[i][j] == '8')
            my_putchar(lab[i][j]);
         else
            my_putchar(' ');
         j++;  
      }
      my_putchar('\n');
      j = 0;
      i++;
   }
}
