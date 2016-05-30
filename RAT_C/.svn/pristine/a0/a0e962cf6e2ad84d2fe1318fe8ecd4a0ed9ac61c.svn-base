#ifndef __include_file_h__
#define __include_file_h__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

typedef struct s_liste
{
  int	chiffre;
  
  struct s_liste *next;
}t_liste;

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int	nbr);
void	aff(t_liste *list, int	sec, int tour);
void	my_putnbr_hexa(int	nbr);
void 	aff_list(t_liste *list);
void	compare_aff(int tour);

int 	compare_list(t_liste *list, char  *str, int tour);
int	my_strlen(char *str);
int	gestion_err(char *ok);
int	game(t_liste *numero, char  *read, int sec, int	tour);
int	taille(int  i, char  *str, int tour);
int   	solo_random();

char	*readLine();
char	*reaad();

#endif
