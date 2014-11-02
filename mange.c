#include "plantamiz.h"

int mange(char matrice[10][15],t_contrat* contrat1)
{
    //combinaison de 5
    combinaisoncolonnecinq(matrice,contrat1);
    combinaisonlignecinq(matrice,contrat1);

    //combinaison de 4 et 4
    combinaisoncroixquatrequatredroite1(matrice,contrat1);
    combinaisoncroixquatrequatredroite2(matrice,contrat1);
    combinaisoncroixquatrequatregauche1(matrice,contrat1);
    combinaisoncroixquatrequatregauche2(matrice,contrat1);

    combinaisonTgauchequatrequatre1(matrice,contrat1);
    combinaisonTgauchequatrequatre2(matrice,contrat1);
    combinaisonTdroitequatrequatre1(matrice,contrat1);
    combinaisonTdroitequatrequatre2(matrice,contrat1);
    combinaisonTmilieubasquatrequatre1(matrice,contrat1);
    combinaisonTmilieubasquatrequatre2(matrice,contrat1);
    combinaisonTmilieuhautquatrequatre1(matrice,contrat1);
    combinaisonTmilieuhautquatrequatre2(matrice,contrat1);

    combinaisonLgauchebasquatrequatre(matrice,contrat1);
    combinaisonLgauchehautquatrequatre(matrice,contrat1);
    combinaisonLdroitehautquatrequatre(matrice,contrat1);
    combinaisonLdroitebasquatrequatre(matrice,contrat1);

    //combinaison de 3 et 4
    combinaisoncroixquatretroisgauche(matrice,contrat1);
    combinaisoncroixquatretroisdroite(matrice,contrat1);
    combinaisoncroixtroisquatre1(matrice,contrat1);
    combinaisoncroixtroisquatre2(matrice,contrat1);

    combinaisonTgauchetroisquatre1(matrice,contrat1);
    combinaisonTgauchetroisquatre2(matrice,contrat1);
    combinaisonTgauchequatretrois(matrice,contrat1);
    combinaisonTdroitetroisquatre1(matrice,contrat1);
    combinaisonTdroitetroisquatre1(matrice,contrat1);
    combinaisonTdroitequatretrois(matrice,contrat1);
    combinaisonTmilieubasquatretrois1(matrice,contrat1);
    combinaisonTmilieubasquatretrois2(matrice,contrat1);
    combinaisonTmilieuhautquatretrois1(matrice,contrat1);
    combinaisonTmilieuhautquatretrois2(matrice,contrat1);
    combinaisonTmilieubastroisquatre(matrice,contrat1);
    combinaisonTmilieuhauttroisquatre(matrice,contrat1);

    combinaisonLgauchebastroisquatre(matrice,contrat1);
    combinaisonLgauchebasquatretrois(matrice,contrat1);
    combinaisonLgauchehautquatretrois(matrice,contrat1);
    combinaisonLgauchehauttroisquatre(matrice,contrat1);
    combinaisonLdroitebastroisquatre(matrice,contrat1);
    combinaisonLdroitebasquatretrois(matrice,contrat1);
    combinaisonLdroitehauttroisquatre(matrice,contrat1);
    combinaisonLdroitehautquatretrois(matrice,contrat1);

    //combinaison de 3 et 3
    combinaisoncroixtroistrois(matrice,contrat1);

    combinaisonTgauchetroistrois(matrice,contrat1);
    combinaisonTdroitetroistrois(matrice,contrat1);
    combinaisonTmilieubastroistrois(matrice,contrat1);
    combinaisonTmilieuhauttroistrois(matrice,contrat1);

    combinaisonLgauchebastroistrois(matrice,contrat1);
    combinaisonLgauchehauttroistrois(matrice,contrat1);
    combinaisonLdroitehauttroistrois(matrice,contrat1);
    combinaisonLdroitebastroistrois(matrice,contrat1);

    //combinaison de 4
    combinaisoncolonnequatre(matrice,contrat1);
    combinaisonlignetrois(matrice,contrat1);

    //combinaison de 3
    combinaisoncolonnetrois(matrice,contrat1);
    combinaisonlignetrois(matrice,contrat1);

    if (contrat1->soleils <0) contrat1->soleils=0;
    if (contrat1->fraises <0) contrat1->fraises=0;
    if (contrat1->pommes <0) contrat1->pommes=0;
    if (contrat1->oignons <0) contrat1->oignons=0;
    if (contrat1->mandarines <0) contrat1->mandarines=0;

}
