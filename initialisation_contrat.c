#include "plantamiz.h"

void initialisation_contrat (t_joueur* joueur,t_contrat* contrat1)
{
    if (joueur->niveau == 1)
    {
        contrat1->soleils = 80;
        contrat1->fraises = 50;
        contrat1->pommes = 75;
        contrat1->oignons = 0;
        contrat1->mandarines = 80;
        contrat1->coups = 10;
    }

    if (joueur->niveau == 2)
    {
        contrat1->soleils = 90;
        contrat1->fraises = 105;
        contrat1->pommes = 90;
        contrat1->oignons = 95;
        contrat1->mandarines = 0;
        contrat1->coups = 15;
    }

    if (joueur->niveau == 3)
    {
        contrat1->soleils = 105;
        contrat1->fraises = 95;
        contrat1->pommes = 90;
        contrat1->oignons = 100;
        contrat1->mandarines = 90;
        contrat1->coups = 15;

    }

    if (joueur->niveau == 4)
    {
        contrat1->soleils = 105;
        contrat1->fraises = 95;
        contrat1->pommes = 105;
        contrat1->oignons = 110;
        contrat1->mandarines = 95;
        contrat1->coups = 10;

    }

}
