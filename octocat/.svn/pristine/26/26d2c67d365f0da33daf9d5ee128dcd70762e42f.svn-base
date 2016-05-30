#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

void     my_putchar(char c)
{
  write(1, &c, 1);
}

void     my_putstr(char *str)
{
  int i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i++;
    }
}

void     my_aff_tab(char** lab)
{
   int   i;
   int   j;

   i = 0;
   j = 0;
   //my_putchar('a');
   while(lab[i] != '\0')
   {
      my_putstr(lab[i]);
      my_putchar('\n');
      j = 0;
      i++;
   }
}

char     **crea_lab(char *str)
{
   int   i;
   int   j;
   int   c;
   char  **lab;

   c = 0;
   if (!(lab = malloc(15 * sizeof(char *))))
      exit(0);
   for (i = 0; i < 15; i++)
   {
      if (!(lab[i] = malloc(15 * sizeof(char))))
      {
         exit(0);
      }
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

char**     read_lab(char *dossier) //lis le contenu du ficher et ressort dans contente en string complete
{
   int   handle;
   int   size;
   char  *content;
   char **lab;

   if (!(content = malloc((15 + 1)  * 15 * sizeof(char))))
    exit(0);
   handle = open(dossier, O_RDONLY);
   size = read(handle, content, 239 * sizeof(char));
   close(handle);
   //content[size - 1] = '\0';
   lab = crea_lab(content); // fonction creer tableaux
   free(content);
   return (lab);
}

int      main(void)
{
   char *str;
   char **lab;

   str = "lab_hard.txt";
   lab = read_lab(str);
   my_aff_tab(lab);
   return (0);

}
























char     **create_lab(char *str)
{
   int   i;
   int   j;
   char  **lab;
   char  *tmp;

   tmp = malloc(15 * sizeof(char));
   if (!(lab = malloc(15 * sizeof(char *))))
      return NULL;
   for (i = 0; i < 15; i++)
   {
      if (!(lab[i] = malloc(15 * sizeof(char))))
      {
         return NULL;
      }
      for (j = 0; j < 15; j++)
      {
         tmp[j] = str[j];
      }
      lab[i] = my_strdup(tmp);
   }
   return (lab);
}
