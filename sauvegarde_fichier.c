#include "plantamiz.h"

void sauvegarde_fichier(t_joueur*joueur)
{
    FILE* fichier = NULL;
    char tab[50];
    strcpy(tab,joueur->prenom);
    fichier = fopen(strcat(tab,".txt"),"w");

    if (fichier == NULL)
        printf("probleme d ouverture\n");
    else
    {
        fprintf(fichier, "%s ",joueur->prenom);
        fprintf(fichier, "%d",joueur->niveau);

        fclose(fichier);
    }
}
