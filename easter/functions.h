#ifndef __include_file_h__
#define __include_file_h__
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_grille
{
	char	**tab;
    int 	x;
    int 	y;
}t_grille;

typedef struct s_mots
{
	char	*word;
    int 	debut_x;
    int 	debut_y;
    int 	fin_x;
    int 	fin_y;
    int		trouve;

    struct s_mots *next;
}t_mots;

void	my_putchar(char c);
void	my_putstr(char *c);
void  	my_put_nbr(int n);
void 	malloc_tab(t_grille *ma_grille);
void	first_letter(t_grille grille, t_mots *mot);
void	second_letter_one(t_grille grille, t_mots *mot, int i, int j);
void	second_letter_two(t_grille grille, t_mots *mot, int i, int j);
void affichage (t_mots    *ma_liste);

int 	taille_grille(char   *content, t_grille *ma_grille);
int   	my_strlen(char *str);

char 	*read_grille(char *dossier);

t_mots	droite(t_grille grille, t_mots *mot, int i, int j);
t_mots  gauche(t_grille grille, t_mots *mot, int i, int j);
t_mots  haut(t_grille grille, t_mots *mot, int i, int j);
t_mots  bas(t_grille grille, t_mots *mot, int i, int j);
t_mots  bas_gauche(t_grille grille, t_mots *mot, int i, int j);
t_mots  bas_droite(t_grille grille, t_mots *mot, int i, int j);
t_mots  haut_gauche(t_grille grille, t_mots *mot, int i, int j);
t_mots  haut_droite(t_grille grille, t_mots *mot, int i, int j);
t_mots 	ajouter_Mot_Fin(t_mots *ma_liste, char *word);
t_mots  ajouter_Premier_Mot(t_mots *ma_liste, char *word);
t_grille  *crea_grille(char *content, t_grille *ma_grille, int  i);
t_grille *exec_grille(char *grille, t_grille *ma_grille);
t_mots  *crea_mots(char *content, t_mots *ma_liste, int  i);
t_mots *exec_mots(char *liste, t_mots *ma_liste);

#endif
