#include "plantamiz.h"

int changer_de_place(char matrice[10][15],t_contrat* contrat1)
{
    char a = 'a';
    int b = 1;
    int c = 1;
    while (c)
    {
        switch(getch())
        {

            case '2':
                if (curseur.y != 9)
                {
                    a = matrice[curseur.y][curseur.x];
                    matrice[curseur.y][curseur.x] = matrice[curseur.y+1][curseur.x];
                    matrice[curseur.y+1][curseur.x] = a;
                    matrice[curseur.y+1][curseur.x] = matrice[curseur.y+1][curseur.x] + 'A' - 'a';

                    contrat1->coups--;
                    if (contrat1->coups <= 0)
                    {
                        contrat1->coups = 0;
                    }
                    b = 0;
                    c = 0;
                }
                break;
            case '8':
                if (curseur.y != 0)
                {
                    a = matrice[curseur.y][curseur.x];
                    matrice[curseur.y][curseur.x] = matrice[curseur.y-1][curseur.x];
                    matrice[curseur.y-1][curseur.x] = a;
                    matrice[curseur.y-1][curseur.x] = matrice[curseur.y-1][curseur.x] +'A' - 'a';

                    contrat1->coups--;
                    if (contrat1->coups <= 0)
                    {
                        contrat1->coups = 0;
                    }
                    b = 0;
                    c = 0;
                }
                break;
            case '4':
                if (curseur.x != 0)
                {
                    a = matrice[curseur.y][curseur.x];
                    matrice[curseur.y][curseur.x] = matrice[curseur.y][curseur.x-1];
                    matrice[curseur.y][curseur.x-1] = a;
                    matrice[curseur.y][curseur.x-1] = matrice[curseur.y][curseur.x-1] + 'A' - 'a';

                    contrat1->coups--;
                    if (contrat1->coups <= 0)
                    {
                        contrat1->coups = 0;
                    }
                    b = 0;
                    c = 0;
                }
                break;
            case '6':
                if (curseur.x != 14)
                {
                    a = matrice[curseur.y][curseur.x];
                    matrice[curseur.y][curseur.x] = matrice[curseur.y][curseur.x+1];
                    matrice[curseur.y][curseur.x+1] = a;
                    matrice[curseur.y][curseur.x+1] = matrice[curseur.y][curseur.x+1] +'A' - 'a';

                    contrat1->coups--;
                    if (contrat1->coups <= 0)
                    {
                        contrat1->coups = 0;
                    }
                    b = 0;
                    c = 0;
                }
                break;
            case ' ':
                matrice[curseur.y][curseur.x] = matrice[curseur.y][curseur.x] + 'A' - 'a';
                c = 0;
                break;
        }
    }
    return b;
}
