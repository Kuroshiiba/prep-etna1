/*
** my_strncat.c for my_strncat in /home/lacamb_t/Piscine/DEVC/Jour04/lacamb_t/my_strncat
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Thu Oct  1 16:33:50 2015 LACAMBRA Thomas
** Last update Thu Oct  1 16:38:48 2015 LACAMBRA Thomas
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(str1[i] != '\0')
    i += 1;
  while(j != n)
    {
      str1[i] = str2[j];
      i += 1;
      j += 1;
    }
  return(str1);
}
