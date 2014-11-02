#include "plantamiz.h"

int mange(char matrice[10][15],t_contrat* contrat1)
{
    int r = 0;
    //combinaison de 5
    r += combinaisoncolonnecinq(matrice,contrat1);
    r += combinaisonlignecinq(matrice,contrat1);

    //combinaison de 4 et 4
    r += combinaisoncroixquatrequatredroite1(matrice,contrat1);
    r += combinaisoncroixquatrequatredroite2(matrice,contrat1);
    r += combinaisoncroixquatrequatregauche1(matrice,contrat1);
    r += combinaisoncroixquatrequatregauche2(matrice,contrat1);

    r += combinaisonTgauchequatrequatre1(matrice,contrat1);
    r += combinaisonTgauchequatrequatre2(matrice,contrat1);
    r += combinaisonTdroitequatrequatre1(matrice,contrat1);
    r += combinaisonTdroitequatrequatre2(matrice,contrat1);
    r += combinaisonTmilieubasquatrequatre1(matrice,contrat1);
    r += combinaisonTmilieubasquatrequatre2(matrice,contrat1);
    r += combinaisonTmilieuhautquatrequatre1(matrice,contrat1);
    r += combinaisonTmilieuhautquatrequatre2(matrice,contrat1);

    r += combinaisonLgauchebasquatrequatre(matrice,contrat1);
    r += combinaisonLgauchehautquatrequatre(matrice,contrat1);
    r += combinaisonLdroitehautquatrequatre(matrice,contrat1);
    r += combinaisonLdroitebasquatrequatre(matrice,contrat1);

    //combinaison de 3 et 4
    r += combinaisoncroixquatretroisgauche(matrice,contrat1);
    r += combinaisoncroixquatretroisdroite(matrice,contrat1);
    r += combinaisoncroixtroisquatre1(matrice,contrat1);
    r += combinaisoncroixtroisquatre2(matrice,contrat1);

    r += combinaisonTgauchetroisquatre1(matrice,contrat1);
    r += combinaisonTgauchetroisquatre2(matrice,contrat1);
    r += combinaisonTgauchequatretrois(matrice,contrat1);
    r += combinaisonTdroitetroisquatre1(matrice,contrat1);
    r += combinaisonTdroitetroisquatre1(matrice,contrat1);
    r += combinaisonTdroitequatretrois(matrice,contrat1);
    r += combinaisonTmilieubasquatretrois1(matrice,contrat1);
    r += combinaisonTmilieubasquatretrois2(matrice,contrat1);
    r += combinaisonTmilieuhautquatretrois1(matrice,contrat1);
    r += combinaisonTmilieuhautquatretrois2(matrice,contrat1);
    r += combinaisonTmilieubastroisquatre(matrice,contrat1);
    r += combinaisonTmilieuhauttroisquatre(matrice,contrat1);

    r += combinaisonLgauchebastroisquatre(matrice,contrat1);
    r += combinaisonLgauchebasquatretrois(matrice,contrat1);
    r += combinaisonLgauchehautquatretrois(matrice,contrat1);
    r += combinaisonLgauchehauttroisquatre(matrice,contrat1);
    r += combinaisonLdroitebastroisquatre(matrice,contrat1);
    r += combinaisonLdroitebasquatretrois(matrice,contrat1);
    r += combinaisonLdroitehauttroisquatre(matrice,contrat1);
    r += combinaisonLdroitehautquatretrois(matrice,contrat1);

    //combinaison de 3 et 3
    r += combinaisoncroixtroistrois(matrice,contrat1);

    r += combinaisonTgauchetroistrois(matrice,contrat1);
    r += combinaisonTdroitetroistrois(matrice,contrat1);
    r += combinaisonTmilieubastroistrois(matrice,contrat1);
    r += combinaisonTmilieuhauttroistrois(matrice,contrat1);

    r += combinaisonLgauchebastroistrois(matrice,contrat1);
    r += combinaisonLgauchehauttroistrois(matrice,contrat1);
    r += combinaisonLdroitehauttroistrois(matrice,contrat1);
    r += combinaisonLdroitebastroistrois(matrice,contrat1);

    //combinaison de 4
    r += combinaisoncolonnequatre(matrice,contrat1);
    r += combinaisonlignequatre(matrice,contrat1);

    //combinaison de 3
    r += combinaisoncolonnetrois(matrice,contrat1);
    r += combinaisonlignetrois(matrice,contrat1);

    if (contrat1->soleils <0) contrat1->soleils=0;
    if (contrat1->fraises <0) contrat1->fraises=0;
    if (contrat1->pommes <0) contrat1->pommes=0;
    if (contrat1->oignons <0) contrat1->oignons=0;
    if (contrat1->mandarines <0) contrat1->mandarines=0;

    return r;

}
