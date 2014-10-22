#ifndef PLANTAMIZ_H_INCLUDED
#define PLANTAMIZ_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>

#define FOREGROUND_WHITE FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE

typedef struct joueur
{
char prenom[50];
int niveau;
int vie;
} t_joueur;

typedef struct contract
{
int soleils;
int fraises;
int pommes;
int oignons;
int mandarines;
int coups;
} t_contract;

HANDLE console;

void supr();
void setColor(int color);
void affiche_menu(int menu_pos);
int creation_fichier();
int ouverture_fichier();

#endif // PLANTAMIZ_H_INCLUDED
