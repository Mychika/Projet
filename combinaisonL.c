#include "plantamiz.h"

int combinaisonLgauchebastroistrois(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche de la ligne vers le bas de 3 caractéres de chaque coté
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=0;i<8;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i+1][j]==matrice[i+2][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j]=' ';
                matrice[i+2][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLgauchebasquatretrois(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche de la ligne vers le bas de 4 caractéres en lignes et 3 en colonnes
{
   int r = 0;
   int i; int j;
   int motifidentique;
    for (i=0;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i+1][j]==matrice[i+2][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j]=' ';
                matrice[i+2][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLgauchebastroisquatre(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche de la ligne vers le bas de trois caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=0;i<7;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i+1][j]==matrice[i+2][j])&&(matrice[i+2][j]==matrice[i+3][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j]=' ';
                matrice[i+2][j]=' ';
                matrice[i+3][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLgauchebasquatrequatre(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche de la ligne vers le bas de 4 caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=0;i<7;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j]==matrice[i+1][j])&&(matrice [i+1][j]==matrice[i+2][j])&&(matrice[i+2][j]==matrice[i+3][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j]=' ';
                matrice[i+2][j]=' ';
                matrice[i+3][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLdroitebastroistrois(char matrice[10][15],t_contrat* contrat1) //motif en L a droite en bas de la ligne de trois caractéres en lignes et colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=0;i<8;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i+1][j+2])&&(matrice [i+1][j+2]==matrice[i+2][j+2]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i+2][j+2]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}


int combinaisonLdroitebasquatretrois(char matrice[10][15],t_contrat* contrat1) //motif en L à droite en bas de la ligne de 4 caractéres en lignes et 3 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=0;i<8;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+3]==matrice[i+1][j+3])&&(matrice [i+1][j+3]==matrice[i+2][j+3]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+3]=' ';
                matrice[i+2][j+3]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLdroitebastroisquatre(char matrice[10][15],t_contrat* contrat1) //motif en L à droite vers le bas de la ligne de trois caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=0;i<7;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i+1][j+2])&&(matrice [i+1][j+2]==matrice[i+2][j+2])&&(matrice[i+2][j+2]==matrice[i+3][j+2]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i+1][j+2]=' ';
                matrice[i+2][j+2]=' ';
                matrice[i+3][j+2]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLdroitebasquatrequatre(char matrice[10][15],t_contrat* contrat1) //motif en L à droite vers le bas de la ligne de 4 caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=0;i<7;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j+3]==matrice[i+1][j+3])&&(matrice [i+1][j+3]==matrice[i+2][j+3])&&(matrice[i+2][j+3]==matrice[i+3][j+3]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i+1][j+3]=' ';
                matrice[i+2][j+3]=' ';
                matrice[i+3][j+3]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLgauchehauttroistrois(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche vers le haut
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=2;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&
                (matrice[i][j]==matrice[i-1][j])&&(matrice [i-1][j]==matrice[i-2][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i-1][j]=' ';
                matrice[i-2][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLgauchehautquatretrois(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche de la ligne vers le haut de 4 caractéres en lignes et 3 en colonnes
{
   int r = 0;
   int i; int j;
   int motifidentique;

    for (i=2;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j]==matrice[i-1][j])&&(matrice [i-1][j]==matrice[i-2][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j]=' ';
                matrice[i-2][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}


int combinaisonLgauchehauttroisquatre(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche de la ligne vers le haut de trois caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=3;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&
                (matrice[i][j]==matrice[i-1][j])&&(matrice [i-1][j]==matrice[i-2][j])&&(matrice[i-2][j]==matrice[i-3][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i-1][j]=' ';
                matrice[i-2][j]=' ';
                matrice[i-3][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLgauchehautquatrequatre(char matrice[10][15],t_contrat* contrat1) //motif en L à gauche de la ligne vers le haut de 4 caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=3;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j]==matrice[i-1][j])&&(matrice [i-1][j]==matrice[i-2][j])&&(matrice[i-2][j]==matrice[i-3][j]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j]=' ';
                matrice[i-2][j]=' ';
                matrice[i-3][j]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLdroitehauttroistrois(char matrice[10][15],t_contrat* contrat1) //motif en L a droite en haut de la ligne de trois caractéres en lignes et colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=2;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&
                (matrice[i][j+2]==matrice[i-1][j+2])&&(matrice [i-1][j+2]==matrice[i-2][j+2]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i-2][j+2]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLdroitehautquatretrois(char matrice[10][15],t_contrat* contrat1) //motif en L à droite en haut de la ligne de 4 caractéres en lignes et 3 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=2;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j+3]==matrice[i-1][j+3])&&(matrice [i-1][j+3]==matrice[i-2][j+3]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j+3]=' ';
                matrice[i-2][j+3]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLdroitehauttroisquatre(char matrice[10][15],t_contrat* contrat1) //motif en L à droite vers le haut de la ligne de trois caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=3;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&
                (matrice[i][j+2]==matrice[i-1][j+2])&&(matrice [i-1][j+2]==matrice[i-2][j+2])&&(matrice[i-2][j+2]==matrice[i-3][j+2]))
            {

                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i-1][j+2]=' ';
                matrice[i-2][j+2]=' ';
                matrice[i-3][j+2]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}

int combinaisonLdroitehautquatrequatre(char matrice[10][15],t_contrat* contrat1) //motif en L à droite vers le haut de la ligne de 4 caractéres en ligne et 4 en colonnes
{
    int r = 0;
    int i; int j;
    int motifidentique;
    for (i=3;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&
                (matrice[i][j+3]==matrice[i-1][j+3])&&(matrice [i-1][j+3]==matrice[i-2][j+3])&&(matrice[i-2][j+3]==matrice[i-3][j+3]))
            {
                motifidentique=matrice[i][j];

                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';
                matrice[i-1][j+3]=' ';
                matrice[i-2][j+3]=' ';
                matrice[i-3][j+3]=' ';

                switch (motifidentique) //incrémentation du score
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
                r = 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

    return r;
}
