#include "plantamiz.h"


void jouer(t_joueur* joueur,t_contrat* contrat1)
{
    // Décla var
    char matrice[10][15];
    char key = 0;
    int b = 1;

    // Initialisation du jeu
    creation_matrice (matrice);
    initialisation_contrat (joueur,contrat1);

   //while ("nom du programme qui mange"(matrice))
   //{
        while(tombage(matrice))
        {

        }
    //}

    do
    {
        // Initialisation de la boucle
        affichage_matrice (matrice,contrat1);

        // Déplacement du curseur
        while(b)
        {
            key = getch();
            switch(key)
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
                    getch();
                    break;
            }
        }

        //while ("nom du programme qui mange"(matrice))
        //{
            //affichage_matrice (matrice,contrat1);
            // while(tombage(matrice))
            //{

            //}
        //}

    }
    while((contrat1->coups > 0) || ((contrat1->fraises > 0) && (contrat1->pommes > 0) && (contrat1->soleils > 0) && (contrat1->oignons > 0) && (contrat1->mandarines > 0)));

    // Transition
    transition(contrat1,joueur);
}
