#include "plantamiz.h"

void initialisation_contrat (t_joueur* joueur,t_contrat* contrat1)
{
    if (joueur->niveau == 1)
    {
        contrat1->soleils = 60;
        contrat1->fraises = 50;
        contrat1->pommes = 55;
        contrat1->oignons = 0;
        contrat1->mandarines = 50;
        contrat1->coups = 15;
    }

    if (joueur->niveau == 2)
    {
        contrat1->soleils = 50;
        contrat1->fraises = 65;
        contrat1->pommes = 50;
        contrat1->oignons = 55;
        contrat1->mandarines = 0;
        contrat1->coups = 20;
    }

    if (joueur->niveau == 3)
    {
        contrat1->soleils = 65;
        contrat1->fraises = 70;
        contrat1->pommes = 60;
        contrat1->oignons =70;
        contrat1->mandarines = 60;
        contrat1->coups = 25;

    }
}
