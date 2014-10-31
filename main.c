#include "plantamiz.h"

int main()
{
    srand(time(NULL)); //initialisation de l'horloge

    console = GetStdHandle(STD_OUTPUT_HANDLE);
    int menu_pos = 0;
    char key = 'a';
    int b = 1;
    int niveau = 0;

    // Initialisation var globale du curseur
    curseur.x = 0 ;
    curseur.y = 0;

    // Création d'un t_joueur, t_contrat
    t_joueur joueur;
    t_contrat* contrat1 = malloc(sizeof(t_contrat));

    // Récupération du déplacement du curseur par le joueur
    while (b)
    {
        affiche_menu(menu_pos);
        key = getch();

        switch (key)
        {
            case '8' :
                menu_pos = (menu_pos + 2)% 3;
                break;

            case '2' :
                menu_pos = (menu_pos + 1)% 3;
                break;

            case ' ' :
            {
                // Différent cas en fonction de la position du curseur
                switch (menu_pos)
                {
                    case 0 :
                        do
                        {
                            niveau = creation_fichier(&joueur);
                        } while (niveau < 1);
                        jouer (&joueur,contrat1);
                        break;

                    case 1 :
                        do
                        {
                            niveau = ouverture_fichier(&joueur);
                        } while (niveau < 1);
                        jouer (&joueur,contrat1);
                        break;

                    case 2 :
                        b = 0;
                        break;
                }
            }
        }
    }

    return 0;
}
