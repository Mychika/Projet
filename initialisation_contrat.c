#include "plantamiz.h"

void initialisation_contrat (t_joueur* joueur,t_contrat* contrat1)
{
    if (joueur->niveau == 1)
    {
        contrat1->soleils = 20;
        contrat1->fraises = 15;
        contrat1->pommes = 15;
        contrat1->oignons = 0;
        contrat1->mandarines = 5;
        contrat1->coups = 15;
    }

    if (joueur->niveau == 2)
    {
        contrat1->soleils = 0;
        contrat1->fraises = 2;
        contrat1->pommes = 45;
        contrat1->oignons = 12;
        contrat1->mandarines = 0;
        contrat1->coups = 15;
    }

    if (joueur->niveau == 3)
    {
        contrat1->soleils = 0;
        contrat1->fraises = 30;
        contrat1->pommes = 25;
        contrat1->oignons = 35;
        contrat1->mandarines = 30;
        contrat1->coups = 0;
    }

}
