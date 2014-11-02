#include "plantamiz.h"


void jouer(t_joueur* joueur,t_contrat* contrat1)
{
    // Décla var
    char matrice[10][15];
    char key = 0;
    int b;

    // Initialisation du jeu
    creation_matrice (matrice);

   while (mange(matrice,contrat1))
   {
        while(tombage(matrice))
        {

        }
    }

    initialisation_contrat (joueur,contrat1);
    affichage_matrice (matrice,contrat1);

    do
    {
        // Déplacement du curseur
        b = 1;
        while(b)
        {
            switch(getch())
            {
                case '2':
                    curseur.y = (curseur.y + 1) %10;
                    affichage_matrice (matrice,contrat1);
                    break;
                case '8':
                    curseur.y = (curseur.y + 9) %10;
                    affichage_matrice (matrice,contrat1);
                    break;
                case '6':
                    curseur.x = (curseur.x + 1) %15;
                    affichage_matrice (matrice,contrat1);
                    break;
                case '4':
                    curseur.x = (curseur.x + 14) %15;
                    affichage_matrice (matrice,contrat1);
                    break;
                case ' ':
                    matrice[curseur.y][curseur.x] = matrice[curseur.y][curseur.x] - 'A' + 'a';
                    affichage_matrice (matrice,contrat1);
                    b = changer_de_place(matrice,contrat1);
                    affichage_matrice (matrice,contrat1);
                    break;
            }
        }

        while (mange(matrice, contrat1))
        {
            affichage_matrice(matrice,contrat1);
            attendre();
            while(tombage(matrice))
            {
                affichage_matrice(matrice,contrat1);
                attendre();
            }
        }
    }
    while((contrat1->coups > 0) && ((contrat1->fraises > 0) || (contrat1->pommes > 0) || (contrat1->soleils > 0) || (contrat1->oignons > 0) || (contrat1->mandarines > 0)));

    attendre();
    attendre();
    // Transition
    transition(contrat1,joueur);
}

void attendre()
{
    for (int i = 0; i < 60000000; i++)
    {
    }
}
