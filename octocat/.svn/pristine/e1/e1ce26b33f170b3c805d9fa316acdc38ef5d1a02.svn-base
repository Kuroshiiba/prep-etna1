/*                                                                                                                                                                                                                                                                            
** lab.c for Octocat in /Users/gueye_o/Documents/pato/Octocat/gueye_o                                                                                                                                                                                                      
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#include "fonction.h"

void  crea_lab(char *str)
{
   int   i;
   int   j;
   int   c;
   char** lab;

   if (!(lab = malloc(15 * sizeof(char *))))
      exit(1);
   for (i = 0; i < 15; i++)
   {
      if (!(lab[i] = malloc(15 * sizeof(char))))
      {
         exit(1);
      }
      for (j = 0; j < 15; j++)
      {
         if (str[c] == '\n')
            c++;
         lab[i][j] = str[c]
         c++
      }
      lab[i][j] = '\0'
   }
   return (lab);
}

void read_lab(char *dossier) //lis le contenu du ficher et ressort dans content en string complete
{
   int handle;
   int size;
   char *content;

   if (!(content = malloc((15 + 1)  * 15 * sizeof(char))))
    exit(1);
   handle = open(dossier, r);
   size = read(handle, content, 225 * sizeof(char));
   close(handle);
   content[size - 1] = '\0';
   crea_tab(content); // fonction creer tableaux
   free(content);
}

void my_aff_tab(char** lab)
{
   int i;
   int j;

   while(lab[i] != '\0')
   {
      while(lab[j] != '\0')
      {
         my_putchar(lab[i][j]);
         j++;
         
      }
      my_putchar('\n');
      j = 0;
      i++;
   }
}