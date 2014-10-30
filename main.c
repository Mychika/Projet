#include "plantamiz.h"

int main()
{
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    int menu_pos = 0;
    char key = 'a';
    int b = 1;
    int niveau;

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
                            niveau = creation_fichier();
                        } while (niveau < 1);
                        // Ici sspg Jouer
                        break;

                    case 1 :
                        do
                        {
                            niveau = ouverture_fichier();
                        } while (niveau < 1);
                        b = 0;
                        // Ici sspg Jouer
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
