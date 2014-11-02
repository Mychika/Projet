#include "plantamiz.h"

void creation_matrice(char matrice[10][15])
{
    int i;
    int j;
    int nbaleatoire;
    for (i=0;i<10;i++) //lignes
    {
        for(j=0;j<15;j++) //colonnes
        {
            nbaleatoire=rand()%5; //il y a 5 lettres possibles
            switch(nbaleatoire)
            {
                case 0 : matrice[i][j]='S';
                         break;
                case 1 : matrice[i][j]='F';
                         break;
                case 2 : matrice[i][j]='P';
                         break;
                case 3 : matrice[i][j]='O';
                         break;
                case 4 : matrice[i][j]='M';
                         break;
            }
        }
    }
}



void affichage_matrice(char matrice[10][15],t_contrat* contrat1)
{
    // Décla des itérateurs
    int i;
    int j;

    supr();
    for (i=0;i<10;i++) //lignes
    {
        for(j=0;j<15;j++) //colonnes
            {
                int surligne = 0;
                if (i == curseur.y && j == curseur.x)
                {
                    surligne = BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY;
                }

                if (matrice[i][j] == 'S' || matrice[i][j] == 's')
                {
                setColor(FOREGROUND_RED | FOREGROUND_INTENSITY | surligne);
                printf("%c ",matrice[i][j]);
                setColor(FOREGROUND_WHITE);
                }

                if (matrice[i][j] == 'F' || matrice[i][j] == 'f')
                {
                setColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY | surligne);
                printf("%c ",matrice[i][j]);
                setColor(FOREGROUND_WHITE);
                }

                if (matrice[i][j] == 'P' || matrice[i][j] == 'p')
                {
                setColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY | surligne);
                printf("%c ",matrice[i][j]);
                setColor(FOREGROUND_WHITE);
                }

                if (matrice[i][j] == 'O' || matrice[i][j] == 'o')
                {
                setColor(FOREGROUND_PURPLE | FOREGROUND_INTENSITY | surligne);
                printf("%c ",matrice[i][j]);
                setColor(FOREGROUND_WHITE);
                }

                if (matrice[i][j] == 'M' || matrice[i][j] == 'm')
                {
                setColor(FOREGROUND_CYAN | FOREGROUND_INTENSITY | surligne);
                printf("%c ",matrice[i][j]);
                setColor(FOREGROUND_WHITE);
                }

                if (matrice[i][j] == ' ')
                {
                    printf("%c ",matrice[i][j]);
                }
            }
        printf("\n");
    }
    printf("\n");
    printf ("%d Soleils\n",contrat1->soleils);
    printf ("%d Fraises\n",contrat1->fraises);
    printf ("%d Pommes\n",contrat1->pommes);
    printf ("%d Oignons\n",contrat1->oignons);
    printf ("%d Mandarines\n",contrat1->mandarines);
    printf ("%d Coups\n\n",contrat1->coups);

}
