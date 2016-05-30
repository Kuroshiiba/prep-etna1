/*                                                                                                                                                                                                                                                                            
** lib.c for Octocat in /Users/gueye_o/Documents/pato/Octocat/gueye_o                                                                                                                                                                                                      
**                                                                                                                                                                                                                                                                            
** Made by GUEYE Osir                                                                                                                                                                                                                                                   
** Login   <gueye_o@etna-alternance.net>                                                                                                                                                                                                                                     
**                                                                                                                                                                                                                                                                            
** Started on  Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
** Last update Fri Jan 22 16:00:28 2016 GUEYE Osir                                                                                                                                                                                                                        
*/
#ifndef __FONCTION_H__
# define __FONCTION_H__ 

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

void		accueil();

void		my_putchar(char c);

void		my_putstr(char *str);

void	 	main_loop();

void	 	menu();

int 		get_index(char c);

int			up(char** lab);

int			down(char** lab);

int			left(char** lab);

int			right(char** lab);

char	 	main_loop_hard(char *choice);

char	 	main_loop_normal(char *choice);

char		main_loop_blind(char *choice);

char		main_loop_octo(char *choice);

char		main_loop_inverse(char *choice);

char		main_loop_rotate(char *choice);

char		quit(char *choice);

void	 	vider_buffer();

void		init_game();

char		**create_lab();

void 		my_aff_lab(char** lab);

void 		init_lab(char** lab);

int 		get_x 	(char** lab);

int 		get_y	(char** lab);

void 		my_swap(char *, char *);

int			my_strlen(char *str);

char		*my_strcpy(char *dest, char *src);

char		*my_strdup(char *str);

void	    my_aff_blind_lab(char** lab);

void 		free_lab(char **lab);

char		*get_str();

char**     	read_lab(char *dossier);

char*		choice();

int			absolute(int x);

int			distance(int x1, int x2, int y1, int y2);

void       octoview(char **lab);

void		replay(char *choice, int i);

int    		my_strcmp(char *s1, char *s2);

void		result(int alive);

void		init_inverse_mvt();

void 		init_mvt();

void 		rotate(char** tab, int s);



typedef int (*fptr)(char **);
fptr ftab[4];

typedef char (*fptr2)(char *);
fptr2 fmenu[7];

#endif
