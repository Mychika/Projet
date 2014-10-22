#include "plantamiz.h"

void affiche_menu(int menu_pos)
{
    supr();
    printf("\n\n\n\n\n\n\n\n");
    printf("            ***********************\n");
    printf("            *                     *\n");
    printf("            * ");

    // Affichage du menu en fonction de la position du curseur
    if (menu_pos == 0)
    {
        setColor(FOREGROUND_RED | FOREGROUND_INTENSITY); //Passe en rouge le texte
        printf("> Nouvelle partie <");
        setColor(FOREGROUND_WHITE);
    }
    else
        printf("  Nouvelle partie  ");
    printf(" *\n");
    printf("            * ");
    if (menu_pos == 1)
    {
        setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("   > Continuer <   ");
        setColor(FOREGROUND_WHITE);
    }
    else
        printf("     Continuer     ");
    printf(" *\n");
    printf("            * ");
    if (menu_pos == 2)
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
