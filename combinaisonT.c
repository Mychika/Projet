#include "plantamiz.h"


int combinaisonTgauchetroistrois(char matrice[10][15],t_contrat* contrat1) //motif en T � gauche de la ligne de 3 caract�res en ligne et en colonne
{
    int i; int j;
    int motifidentique;
    for (i=1;i<9;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i][j]==matrice[i-1][j]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j]=' ';
                matrice[i-1][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(3+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(3+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(3+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(3+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(3+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }

}

int combinaisonTdroitetroistrois (char matrice[10][15],t_contrat* contrat1) //motif en T � droite de la ligne de 3 caract�res en ligne et en colonne
{
    int i; int j;
    int motifidentique;
    for (i=1;i<9;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i-1][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i-1][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(3+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(3+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(3+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(3+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(3+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTmilieubastroistrois (char matrice [10][15],t_contrat* contrat1) //motif en T au milieu de ligne vers le bas de 3 caract�res en ligne et en colonne
{
    int i; int j;
    int motifidentique;
    for (i=0;i<8;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i+2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i+2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(3+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(3+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(3+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(3+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(3+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTmilieuhauttroistrois (char matrice [10][15],t_contrat* contrat1) //motif en T au milieu de ligne vers le haut de 3 caract�res en ligne et en colonne
{
    int i; int j;
    int motifidentique;
    for (i=2;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+1]==matrice[i-1][j+1])&&(matrice [i][j+1]==matrice[i-2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i-2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(3+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(3+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(3+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(3+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(3+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTgauchetroisquatre1 (char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<8;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i][j]==matrice[i-1][j])&&(matrice[i][j]==matrice[i+2][j]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j]=' ';
                matrice[i-1][j]=' ';
                matrice[i+2][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }

}

int combinaisonTgauchetroisquatre2 (char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=2;i<9;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i][j]==matrice[i-1][j])&&(matrice[i][j]==matrice[i-2][j]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j]=' ';
                matrice[i-1][j]=' ';
                matrice[i-2][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTdroitetroisquatre1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<8;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i-1][j+2])&&(matrice[i][j+2]==matrice[i+2][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i+2][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }

}

int combinaisonTdroitetroisquatre2 (char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=2;i<9;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i-1][j+2])&&(matrice[i][j+2]==matrice[i-2][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i-2][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}
int combinaisonTmilieubastroisquatre(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=0;i<7;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&
                (matrice[i][j+1]==matrice[i+1][j+1])&&(matrice[i][j+1]==matrice[i+2][j+1])&&(matrice[i][j+1]==matrice[i+3][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i+2][j+1]=' ';
                matrice[i+3][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTmilieuhauttroisquatre(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=3;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+1]==matrice[i-1][j+1])&&(matrice[i][j+1]==matrice[i-2][j+1])&&(matrice[i][j+1]==matrice[i-3][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i-2][j+1]=' ';
                matrice[i-3][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTgauchequatretrois (char matrice[10][15],t_contrat* contrat1)
{

   int i; int j;
   int motifidentique;
    for (i=1;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i][j]==matrice[i-1][j]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j]=' ';
                matrice[i-1][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }

}

int combinaisonTdroitequatretrois(char matrice[10][15],t_contrat* contrat1)
{

    int i; int j;
    int motifidentique;
    for (i=1;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+3]==matrice[i+1][j+3])&&(matrice [i][j+3]==matrice[i-1][j+3]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+3]=' ';
                matrice[i-1][j+3]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }

}

int combinaisonTmilieuhautquatretrois1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=2;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
            (matrice[i][j+1]==matrice[i-1][j+1])&&(matrice [i][j+1]==matrice[i-2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i-2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}

int combinaisonTmilieuhautquatretrois2(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=2;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+2]==matrice[i-1][j+2])&&(matrice[i][j+2]==matrice[i-2][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i-2][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}

int combinaisonTmilieubasquatretrois1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=0;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i+2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i+2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}

int combinaisonTmilieubasquatretrois2(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=0;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+2]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i+2][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i+2][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}

int combinaisonTgauchequatrequatre1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j]==matrice[i+1][j])&&(matrice [i][j]==matrice[i-1][j])&&(matrice[i][j]==matrice[i+2][j]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ';
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j]=' ';
                matrice[i-1][j]=' ';
                matrice[i+2][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }

}

int combinaisonTgauchequatrequatre2 (char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=2;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j]==matrice[i+1][j])&&(matrice [i][j]==matrice[i-1][j])&&(matrice[i][j]==matrice[i-2][j]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j]=' ';
                matrice[i-1][j]=' ';
                matrice[i-2][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTdroitequatrequatre1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j+3]==matrice[i+1][j+3])&&(matrice [i][j+3]==matrice[i-1][j+3])&&(matrice[i][j+3]==matrice[i+2][j+3]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+3]=' ';
                matrice[i-1][j+3]=' ';
                matrice[i+2][j+3]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }

}

int combinaisonTdroitequatrequatre2 (char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=2;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j+3]==matrice[i+1][j+3])&&(matrice[i][j+3]==matrice[i-1][j+3])&&(matrice[i][j+3]==matrice[i-2][j+3]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+3]=' ';
                matrice[i-1][j+3]=' ';
                matrice[i-2][j+3]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e
            }
        }
    }
}

int combinaisonTmilieubasquatrequatre1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=0;i<7;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])
                &&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i+2][j+1])&&(matrice[i+2][j+1]==matrice[i+3][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i+2][j+1]=' ';
                matrice[i+3][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}

int combinaisonTmilieubasquatrequatre2(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=0;i<7;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j+2]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i+2][j+2])&&(matrice[i+2][j+2]==matrice[i+3][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i+2][j+2]=' ';
                matrice[i+3][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}

int combinaisonTmilieuhautquatrequatre1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=3;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])
                &&(matrice[i][j+1]==matrice[i-1][j+1])&&(matrice [i][j+1]==matrice[i-2][j+1])&&(matrice[i-2][j+1]==matrice[i-3][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i-2][j+1]=' ';
                matrice[i-3][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}

int combinaisonTmilieuhautquatrequatre2(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=3;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j+2]==matrice[i-1][j+2])&&(matrice [i][j+2]==matrice[i-2][j+2])&&(matrice[i-2][j+2]==matrice[i-3][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i-2][j+2]=' ';
                matrice[i-3][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incr�mentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils-(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises-(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes-(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons-(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines-(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliqu�e

            }
        }
    }
}
