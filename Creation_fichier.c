#include "plantamiz.h"

int creation_fichier()
{
    supr();
    char tab[50];
    char pseudo[50];
    int niveau = 0;
    FILE* monfichier = NULL;


    // Récupération pseudo
    printf ("Entrez votre pseudo\n");
    scanf ("%s", tab);
    strcpy (pseudo,tab);

    monfichier = fopen(strcat (tab,".txt"),"r");

    // Ce pseudo n'existe pas
    if (monfichier == NULL)
    {
        monfichier = fopen(tab,"w");

        if (monfichier == NULL)
            printf ("Erreur d ouverture\n");
        else
        {
            fprintf (monfichier,"%s ",pseudo);
            fprintf (monfichier,"1");
            fclose(monfichier);
            niveau = 1;
        }
    }
    // Ce pseudo existe
    else
    {
        int j = 0;
        printf ("Ce pseudo existe, veuillez en taper un autre.\n");

        for (j =0; j < 700500000; j++)
        {
            continue;
        }
        fclose (monfichier);
    }

    return (niveau);
}
