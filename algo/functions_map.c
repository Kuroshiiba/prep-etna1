#include "functions.h"

char  **create_tab(char *str)
{
   int   i;
   int   j;
   int   c;
   char** tab;

   c = 0;
   if (!(tab = malloc(15 * sizeof(char *))))
      exit(1);
   for (i = 0; i < 15; i++)
   {
      if (!(tab[i] = malloc(12 * sizeof(char))))
      {
         exit(1);
      }
      for (j = 0; j < 12; j++)
      {
         if (str[c] == '\n')
            j++;
         tab[i][j] = str[c];
         c++;
      }
      tab[i][j] = '\0';
   }
   return (tab);
}

char  **read_file(char *dossier)
{
   int      handle;
   int      size;
   char     *content;
   char**   tab;

   if (!(content = malloc((15 + 1)  * 15 * sizeof(char))))
    exit(1);
   handle = open(dossier, O_RDONLY);
   size = read(handle, content, 300 * sizeof(char));
   close(handle);
   content[size] = '\0';
   tab = create_tab(content);
   free(content);
   if (size > 226)
      tab[0][0] = 'J';
   if (handle == -1)
      tab[0][0] = 'N';
   return (tab);
}

void  my_print_tab(char** tab)
{
   int i;
   int j;

   i = 0;
   j = 0;
   while (tab[i][j] != '\0')
   {
      while (tab[i][j] != '\0')
      {
         my_putchar(tab[i][j]);
         j++;
      }
      my_putchar('\n');
      j = 0;
      i++;
   }
}

int   *print_tab_ressources(int **tab, int count, int *stock)
{
   int   i;
   int   result;
   int   val1, val2, val3, val4;
   int   *tab_result;

   i = 0;
   val1 = 0;
   val2 = 0;
   val3 = 0;
   val4 = 0;
   result = 0;
   tab_result = malloc(count * sizeof(int));
   my_putchar('\n');
   while (i < count)
   {
      (tab[i][0] > stock[2]) ? (val1 = tab[i][0] - stock[2]) : (val1 = stock[2] - tab[i][0]);
      (tab[i][1] > stock[3]) ? (val2 = tab[i][1] - stock[3]) : (val2 = stock[3] - tab[i][1]);
      (tab[i][0] > stock[0]) ? (val3 = tab[i][0] - stock[0]) : (val3 = stock[0] - tab[i][0]);
      (tab[i][1] > stock[1]) ? (val4 = tab[i][1] - stock[1]) : (val4 = stock[1] - tab[i][1]);

      tab_result[i] = (val1 + val2) + (val3 + val4);
      i++;
   }
   return (tab_result);
}

int   *my_parse_tab(char** tab)
{
   int   i;
   int   j;
   int   *stock;

   i = 0;
   j = 0;
   stock = malloc(4 * sizeof(int));
   while (tab[i][j] != '\0')
   {
      while (tab[i][j] != '\0')
      {
         if (tab[i][j] == '@')
         {
            stock[0] = i;
            stock[1] = j; //stocke la position du perso.
         }
         else if (tab[i][j] == '#')
         {
            stock[2] = i;
            stock[3] = j; //stocke la position de la sortie.
         }
         j++;
      }
      j = 0;
      i++;
   }
   return (stock);
}


int  **my_parse_ressources(char** tab)
{
   int   i;
   int   j;
   int   k;
   int   **stock;
   int   count;

   i = 0;
   j = 0;
   k = 0;
   count = my_count_ressources(tab);
   stock = create_tab_ressources(count);
   while (tab[i][j])
   {
      while (tab[i][j])
      {
         if (tab[i][j] == '+')
         {
            stock[k][0] = i;
            stock[k][1] = j; //stocke les positions des ressources
            k++;
         }
         j++;
      }
      j = 0;
      i++;
   }
   stock[0][2] = count;
   return (stock);
}