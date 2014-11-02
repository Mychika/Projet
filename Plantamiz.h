#ifndef PLANTAMIZ_H_INCLUDED
#define PLANTAMIZ_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

#define FOREGROUND_WHITE FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
#define FOREGROUND_PURPLE FOREGROUND_RED | FOREGROUND_BLUE
#define FOREGROUND_YELLOW FOREGROUND_RED | FOREGROUND_GREEN
#define FOREGROUND_CYAN FOREGROUND_GREEN | FOREGROUND_BLUE

typedef struct joueur
{
    char prenom[50];
    int niveau;
    int vie;
} t_joueur;

typedef struct contrat
{
    int soleils;
    int fraises;
    int pommes;
    int oignons;
    int mandarines;
    int coups;
} t_contrat;

typedef struct position
{
    int x;
    int y;
}t_position;

HANDLE console;
t_position curseur;

void supr();
void setColor(int color);
void affiche_menu(int menu_pos);
int creation_fichier(t_joueur* joueur);
int ouverture_fichier(t_joueur* joueur);
int tombage (char tab[10][15]);
void creation_matrice(char matrice[10][15]);
void affichage_matrice(char matrice[10][15],t_contrat* contrat1);
void initialisation_contrat (t_joueur* joueur,t_contrat* contrat1);
void jouer(t_joueur* joueur,t_contrat* contrat1);
void affiche_transition_perdu(int transition_pos);
void affiche_transition_gagne(int transition_pos);
void transition(t_contrat* contrat,t_joueur* joueur);
void sauvegarde_fichier(t_joueur*joueur);
int changer_de_place(char matrice[10][15],t_contrat* contrat1);

int mange(char matrice[10][15],t_contrat* contrat1);
    int combinaisoncolonnecinq(char matrice[10][15], t_contrat* contrat1);
    int combinaisonlignecinq(char matrice[10][15], t_contrat* contrat1);

    //int combinaison de 4 et 4
    int combinaisoncroixquatrequatredroite1(char matrice[10][15], t_contrat* contrat1);
    int combinaisoncroixquatrequatredroite2(char matrice[10][15], t_contrat* contrat1);
    int combinaisoncroixquatrequatregauche1(char matrice[10][15], t_contrat* contrat1);
    int combinaisoncroixquatrequatregauche2(char matrice[10][15], t_contrat* contrat1);

    int combinaisonTgauchequatrequatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTgauchequatrequatre2(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTdroitequatrequatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTdroitequatrequatre2(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieubasquatrequatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieubasquatrequatre2(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieuhautquatrequatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieuhautquatrequatre2(char matrice[10][15], t_contrat* contrat1);

    int combinaisonLgauchebasquatrequatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLgauchehautquatrequatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitehautquatrequatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitebasquatrequatre(char matrice[10][15], t_contrat* contrat1);

    //int combinaison de 3 et 4
    int combinaisoncroixquatretroisgauche(char matrice[10][15], t_contrat* contrat1);
    int combinaisoncroixquatretroisdroite(char matrice[10][15], t_contrat* contrat1);
    int combinaisoncroixtroisquatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisoncroixtroisquatre2(char matrice[10][15], t_contrat* contrat1);

    int combinaisonTgauchetroisquatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTgauchetroisquatre2(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTgauchequatretrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTdroitetroisquatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTdroitetroisquatre1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTdroitequatretrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieubasquatretrois1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieubasquatretrois2(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieuhautquatretrois1(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieuhautquatretrois2(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieubastroisquatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieuhauttroisquatre(char matrice[10][15], t_contrat* contrat1);

    int combinaisonLgauchebastroisquatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLgauchebasquatretrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLgauchehautquatretrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLgauchehauttroisquatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitebastroisquatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitebasquatretrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitehauttroisquatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitehautquatretrois(char matrice[10][15], t_contrat* contrat1);

    //int combinaison de 3 et 3
    int combinaisoncroixtroistrois(char matrice[10][15], t_contrat* contrat1);

    int combinaisonTgauchetroistrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTdroitetroistrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieubastroistrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonTmilieuhauttroistrois(char matrice[10][15], t_contrat* contrat1);

    int combinaisonLgauchebastroistrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLgauchehauttroistrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitehauttroistrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonLdroitebastroistrois(char matrice[10][15], t_contrat* contrat1);

    //int combinaison de 4
    int combinaisoncolonnequatre(char matrice[10][15], t_contrat* contrat1);
    int combinaisonlignetrois(char matrice[10][15], t_contrat* contrat1);

    //int combinaison de 3
    int combinaisoncolonnetrois(char matrice[10][15], t_contrat* contrat1);
    int combinaisonlignetrois(char matrice[10][15], t_contrat* contrat1);



#endif // PLANTAMIZ_H_INCLUDED
