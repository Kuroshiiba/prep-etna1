/*
** my_putchar.c for my_putchar.c in /home/lacamb_t/Piscine/DEVC/Jour01/lacamb_t
** 
** Made by LACAMBRA Thomas
** Login   <lacamb_t@etna-alternance.net>
** 
** Started on  Mon Sep 28 10:19:13 2015 LACAMBRA Thomas
** Last update Mon Sep 28 17:45:28 2015 LACAMBRA Thomas
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
