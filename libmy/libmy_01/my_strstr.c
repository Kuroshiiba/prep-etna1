/*
** my_strstr.c for my_strstr in /home/lacamb_t/Piscine/DEVC/Jour04/lacamb_t/my_strstr
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Sat Oct  3 19:36:21 2015 LACAMBRA Thomas
** Last update Tue Oct  6 11:36:41 2015 LACAMBRA Thomas
*/
char	*my_strstr(char *str, char *to_find)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	{
	  j += 1;
	}
      else
	j = 0;
      if (to_find[j] == '\0')
	{
	  i = i - j;
	  return (str + i + 1);
	}
      i += 1;
    }
  return ("null");
}
