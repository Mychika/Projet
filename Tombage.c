#include "plantamiz.h"

int tombage (char tab[10][15])
{
    int i = 0;
    int j = 0;
    int b = 0;
    int nbaleatoire = 0;

    for (i = 9; i > 0 ; i--) // Lignes en partant du bas
    {
        for (j = 0; j < 15; j++) // Colonnes
        {
            if (tab[i][j] == ' ')
            {
                tab[i][j] = tab[i-1][j];
                b = 1;
            }
        }
    }

    for(j=0;j<15;j++) //colonnes
    {
        if (tab[0][j] == ' ')
        {
            nbaleatoire=rand()%5; //il y a 5 lettres possibles
            b = 1;
            switch(nbaleatoire)
            {
                case 0 : tab[0][j]='S';
                         break;
                case 1 : tab[0][j]='F';
                         break;
                case 2 : tab[0][j]='P';
                         break;
                case 3 : tab[0][j]='O';
                         break;
                case 4 : tab[0][j]='M';
                         break;
            }
        }
    }

    return b;
}
