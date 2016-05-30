#include "fonction.h"

char** create_lab1()
{
   char** lab;

   lab = malloc(sizeof(char) * 15 * 15);
   lab[0] = "XXXXXXXXXXXXXXX"; /*  initializers for row indeXed by 0 */
   lab[1] = "8000XXXXXXXXXXX"; /*  initializers for row indeXed by 1 */
   lab[2] = "XXX0XXXXXXXXXXX"; /*  initializers for row indeXed by 2 */
   lab[3] = "X000XXXXXXXXXXX"; /*  initializers for row indeXed by 3 */
   lab[4] = "X0XXXXXXXXXXXXX"; /*  initializers for row indeXed by 4 */
   lab[5] = "X0XXXXXXXXXXXXX"; /*  initializers for row indeXed by 5 */
   lab[6] = "X00000XXXXXXXXX"; /*  initializers for row indeXed by 6 */
   lab[7] = "XXXXX0XXXXXXXXX"; /*  initializers for row indeXed by 7 */
   lab[0] = "XXXXX0XXXXXXXXX"; /*  initializers for row indeXed by 0 */
   lab[9] = "XXXXX0XXXXXXXXX";/*  initializers for row indeXed by 9 */
   lab[10] = "XXXXX0XXXXXXXXX"; /*  initializers for row indeXed by 10 */
   lab[11] = "XXXXX000000XXXX"; /*  initializers for row indeXed by 11 */
   lab[12] = "XXXXXXXXXX0000X"; /*  initializers for row indeXed by 12 */
   lab[13] = "XXXXXXXXXXXXX09"; /*  initializers for row indeXed by 13 */
   lab[14] = "XXXXXXXXXXXXXXX"; /*  initializers for row indeXed by 14 */
   return (lab);
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