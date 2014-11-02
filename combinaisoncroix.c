#include "plantamiz.h"

int combinaisoncroixtroistrois(char matrice[10][15],t_contrat* contrat1)
{
    {
    int i; int j;
    int motifidentique;
    for (i=1;i<9;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i-1][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i-1][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(3+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(3+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(3+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(3+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(3+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée

            }

        }
    }
}
}

int combinaisoncroixtroisquatre1(char matrice[10][15],t_contrat* contrat1)
{
    {
    int i; int j;
    int motifidentique;
    for (i=1;i<8;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i-1][j+1])&&(matrice[i][j+1]==matrice[i+2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i+2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }
}
}

int combinaisoncroixtroisquatre2(char matrice[10][15],t_contrat* contrat1)
{
    {
    int i; int j;
    int motifidentique;
    for (i=2;i<9;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i-1][j+1])&&(matrice[i][j+1]==matrice[i-2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i-2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }
}
}

int combinaisoncroixquatretroisgauche(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i-1][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i-1][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée

            }
        }
    }
}

int combinaisoncroixquatretroisdroite (char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+2]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i-1][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i-1][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+3)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+3)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+3)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+3)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+3)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée

            }
        }
    }
}

int combinaisoncroixquatrequatregauche1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i-1][j+1])&&(matrice[i][j+1]==matrice[i+2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i+2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée

            }
        }
    }
}

int combinaisoncroixquatrequatregauche2(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=2;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+1]==matrice[i+1][j+1])&&(matrice [i][j+1]==matrice[i-1][j+1])&&(matrice[i][j+1]==matrice[i-2][j+1]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+1]=' ';
                matrice[i-1][j+1]=' ';
                matrice[i-2][j+1]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée

            }
        }
    }
}

int combinaisoncroixquatrequatredroite1(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;
    for (i=1;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+1]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i-1][j+2])&&(matrice[i][j+2]==matrice[i+2][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i+2][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée

            }
        }
    }
}

int combinaisoncroixquatrequatredroite2(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;

    for (i=2;i<9;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+1]==matrice[i+1][j+2])&&(matrice [i][j+2]==matrice[i-1][j+2])&&(matrice[i][j+2]==matrice[i-2][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i-2][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+(4+4)*2;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+(4+4)*2;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+(4+4)*2;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+(4+4)*2;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+(4+4)*2;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée

            }
        }
    }
}
