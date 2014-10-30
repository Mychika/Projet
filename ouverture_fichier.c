#include "plantamiz.h"

int ouverture_fichier()
{
    supr();
    // Décla var
    int j = 0;
    FILE* monfichier = NULL;
    int niveau = 0;
    char tab [50];
    char pseudo[50];
    t_joueur* joueur2;

    // Récupération pseudo
    printf ("Bienvenu.\n\nEntrez votre pseudo\n");
    scanf ("%s", tab);

    monfichier = fopen(strcat (tab,".txt"),"r");

    // Si le fichier n'existe pas.
    if (monfichier == NULL)
    {
        printf ("Ce pseudo n'existe pas, reessayer.\n");
        for (j =0; j < 700500000; j++)
        {
            continue;
        }
    }
    else
    {
        fscanf (monfichier,"%s",pseudo);
        fscanf (monfichier,"%d",&niveau);

        // Récupération pour t-joueur
        strcpy (joueur2->prenom,pseudo);
        joueur2->niveau = niveau;
        joueur2->vie = 5;

        fclose(monfichier);

        niveau = niveau;
    }

    return (niveau);
}
