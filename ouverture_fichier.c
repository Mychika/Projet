#include "plantamiz.h"

int ouverture_fichier(t_joueur* joueur)
{
    supr();
    // Décla var
    int j = 0;
    FILE* monfichier = NULL;
    int niveau = 0;
    char tab [50];
    char pseudo[50];

    // Récupération pseudo
    printf ("Bonjour\n\nEntrez votre pseudo\n");
    scanf ("%s", tab);

    monfichier = fopen(strcat (tab,".txt"),"r");

    // Si le fichier n'existe pas.
    if (monfichier == NULL)
    {
        printf ("Ce pseudo n'existe pas, reessayez.\n");

        getch();
    }
    else
    {
        fscanf (monfichier,"%s",pseudo);
        fscanf (monfichier,"%d",&niveau);

        // Récupération pour t-joueur
        strcpy (joueur->prenom,pseudo);
        joueur->niveau = niveau;
        joueur->vie = 5;

        fclose(monfichier);

        niveau = niveau;
    }

    return (niveau);
}
