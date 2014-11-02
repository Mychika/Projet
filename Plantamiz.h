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

#endif // PLANTAMIZ_H_INCLUDED
