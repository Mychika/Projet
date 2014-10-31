#include "plantamiz.h"

int changer_de_place(char matrice[10][15])
{
    char a = 'a';
    int b = 1;

    switch(getch())
    {

        case '2':
            if (curseur.y != 9)
            {
                a = matrice[curseur.y][curseur.x];
                matrice[curseur.y][curseur.x] = matrice[curseur.y+1][curseur.x];
                matrice[curseur.y+1][curseur.x] = a;
                b = 0;
                break;
            }
        case '8':
            if (curseur.y != 0)
            {
                a = matrice[curseur.y][curseur.x];
                matrice[curseur.y][curseur.x] = matrice[curseur.y-1][curseur.x];
                matrice[curseur.y-1][curseur.x] = a;
                b = 0;
                break;
            }
        case '4':
            if (curseur.x != 0)
            {
                a = matrice[curseur.y][curseur.x];
                matrice[curseur.y][curseur.x] = matrice[curseur.y][curseur.x-1];
                matrice[curseur.y][curseur.x-1] = a;
                b = 0;
                break;
            }
        case '6':
            if (curseur.x != 14)
            {
                a = matrice[curseur.y][curseur.x];
                matrice[curseur.y][curseur.x] = matrice[curseur.y][curseur.x+1];
                matrice[curseur.y][curseur.x+1] = a;
                b = 0;
                break;
            }
        case ' ':
            matrice[curseur.y][curseur.x] = matrice[curseur.y][curseur.x] + 'A' - 'a';
            break;

    }

    return b;
}
