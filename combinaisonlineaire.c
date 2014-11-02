#include "plantamiz.h"

int combinaisoncolonnetrois(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;

    for (i=0;i<8;i++)
    {
        for (j=0;j<15;j++)
        {
            if ((matrice[i][j]==matrice[i+1][j])&&(matrice[i+1][j]==matrice[i+2][j])) //suppression des motifs identiques
            {
                matrice[i][j]=' ';
                matrice[i+1][j]=' ';
                matrice[i+2][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+3;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+3;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+3;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+3;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+3;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée


            }
        }
    }
}

int combinaisoncolonnequatre(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;

    for (i=0;i<7;i++)
    {
        for (j=0;j<15;j++)
        {
            if ((matrice[i][j]==matrice[i+1][j])&&(matrice[i+1][j]==matrice[i+2][j])&&(matrice[i+2][j]==matrice[i+3][j]))
            {
                matrice[i][j]=' ';
                matrice[i+1][j]=' ';
                matrice[i+2][j]=' ';
                matrice[i+3][j]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+8;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+8;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+8;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+8;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+8;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }

}

int combinaisonlignetrois(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;

    for (i=0;i<10;i++)
    {
        for (j=0;j<13;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ' ;
                matrice[i][j+2]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+3;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+3;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+3;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+3;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+3;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }
}

int combinaisonlignequatre(char matrice[10][15],t_contrat* contrat1)
{
    int i; int j;
    int motifidentique;

    for (i=0;i<10;i++)
    {
        for (j=0;j<12;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3]))
            {
                matrice[i][j]=' ';
                matrice[i][j+1]=' ';
                matrice[i][j+2]=' ';
                matrice[i][j+3]=' ';

                motifidentique=matrice[i][j];
                switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+8;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+8;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+8;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+8;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+8;
                    break;
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }
}

int combinaisonlignecinq(char matrice[10][15],t_contrat* contrat1)
{
    {
    int i; int j; //itérateurs pour trouver la combinaison
    int k; int l; //itérateurs pour trouver les motifs identiques
    int motifidentique;

    for (i=0;i<6;i++)
    {
        for (j=0;j<15;j++)
        {
            if ((matrice[i][j]==matrice[i][j+1])&&(matrice[i][j+1]==matrice[i][j+2])&&(matrice[i][j+2]==matrice[i][j+3])&&(matrice[i][j+3]==matrice[i][j+4]))
            {
                matrice[i][j]=motifidentique;
                for(k=0;k<10;k++) //lignes
                {
                    for(l=0;l<15;l++) //colonnes
                    {
                        if (matrice[k][l]==motifidentique)
                        {
                            matrice[k][l]=' ';
                            switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+1;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+1;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+1;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+1;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+1;
                    break;
                }
                        }



                    }
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }
}
}

int combinaisoncolonnecinq(char matrice[10][15],t_contrat* contrat1)
{
    {
    int i; int j; //itérateurs pour trouver la combinaison
    int k; int l; //itérateurs pour trouver les motifs identiques
    int motifidentique;

    for (i=0;i<10;i++)
    {
        for (j=0;j<11;j++)
        {
            if ((matrice[i][j]==matrice[i+1][j])&&(matrice[i+1][j]==matrice[i+2][j])&&(matrice[i+2][j]==matrice[i+3][j])&&(matrice[i+3][j]==matrice[i+4][j]))
            {
                matrice[i][j]=motifidentique;
                for(k=0;k<10;k++) //lignes
                {
                    for(l=0;l<15;l++) //colonnes
                    {
                        if (matrice[k][l]==motifidentique)
                        {
                            matrice[k][l]=' ';
                            switch (motifidentique) //incrémentation du score
                {
                    case 83 : contrat1->soleils=contrat1->soleils+1;
                    break;
                    case 70 : contrat1->fraises=contrat1->fraises+1;
                    break;
                    case 80 : contrat1->pommes=contrat1->pommes+1;
                    break;
                    case 79 : contrat1->oignons=contrat1->oignons+1;
                    break;
                    case 77 : contrat1->mandarines=contrat1->mandarines+1;
                    break;
                }
                        }
                    }
                }
                return 1; //retourne une valeur pour indiquer que la combinaison s'est appliquée
            }
        }
    }
}
}

