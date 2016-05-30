/*
** my_swap.c for my_swap in /home/lacamb_t/Piscine/DEVC/Jour03/lacamb_t/my_swap
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Wed Sep 30 10:28:48 2015 LACAMBRA Thomas
** Last update Wed Sep 30 16:15:02 2015 LACAMBRA Thomas
*/

void	my_swap(int *a, int *b)
{
  int	c;
  
  c = *a;
  *a = *b;
  *b = c;
}
