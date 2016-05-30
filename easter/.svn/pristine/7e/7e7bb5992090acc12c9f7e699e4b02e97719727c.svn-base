#include "functions.h"

t_mots ajouter_Premier_Mot(t_mots *ma_liste, char *str)
{
    ma_liste->word = str;
    ma_liste->debut_x = -1;
    ma_liste->debut_y = -1;
    ma_liste->fin_x = -1;
    ma_liste->fin_y = -1;
    ma_liste->trouve = 0;
    ma_liste->next = NULL;
    return (*ma_liste);
}

t_mots ajouter_Mot_Fin(t_mots *ma_liste, char *word)
{
    t_mots* nouveau_noeud;
    t_mots* temp; 

    nouveau_noeud = malloc(sizeof(t_mots*) + 1);
    nouveau_noeud->word = malloc(sizeof(char) * my_strlen(word));
	nouveau_noeud->word = word;
	nouveau_noeud->debut_x = -1;
	nouveau_noeud->fin_x = -1;
	nouveau_noeud->fin_y = -1;
	nouveau_noeud->trouve = 0;
	nouveau_noeud->next = NULL;
	if(ma_liste == NULL)
    {
        return (*nouveau_noeud);
    }
    else
    {
        temp = ma_liste;
        while(temp->next != NULL)
        {            
            temp = temp->next; /*passe 2 fois puis segfault*/
        }
        return (*ma_liste);
    }
}
