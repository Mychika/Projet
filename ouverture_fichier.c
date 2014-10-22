#include "plantamiz.h"

int ouverture_fichier()
{
    // Décla var
    supr();
    FILE* monfichier = NULL;
    int niveau;
    char tab [50];
    char pseudo[50];

    // Récupération pseudo
    printf ("Bienvenu.\n\nEntrez votre pseudo\n");
    scanf ("%s", tab);

    monfichier = fopen(strcat (tab,".txt"),"r");

    if (monfichier == NULL)
        printf ("Erreur d ouverture");
    else
    {
        fscanf (monfichier,"%s",pseudo);
        fscanf (monfichier,"%d",&niveau);

        printf ("%s\n",pseudo);
        printf ("%d",niveau);

        fclose(monfichier);
    }

    return (niveau);
}
