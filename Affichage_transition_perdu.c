#include "plantamiz.h"

void affiche_transition_perdu(int transition_pos)
{
    supr();
    printf("\n\n\n\n\n\n\n\n");
    printf("            ***********************\n");
    printf("            *                     *\n");
    printf("            * ");

    // Affichage de la transition en fonction de la position du curseur
    if (transition_pos == 0)
    {
        setColor(FOREGROUND_RED | FOREGROUND_INTENSITY); //Passe en rouge le texte
        printf("  > Recommencer <  ");
        setColor(FOREGROUND_WHITE);
    }
    else
        printf("    Recommencer    ");
    printf(" *\n");
    printf("            * ");

    if (transition_pos == 1)
    {
        setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("    > Quitter <    ");
        setColor(FOREGROUND_WHITE);
    }
    else
        printf("      Quitter      ");
    printf(" *\n");
    printf("            *                     *\n");
    printf("            ***********************\n\n");
}
