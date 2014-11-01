#include "plantamiz.h"

void transition(t_contrat* contrat,t_joueur* joueur)
{
    supr();
    int j = 0;
    int transition_pos = 0;
    int c = 1;



    // Si le joueur a perdu
    if ((contrat->fraises > 0) || (contrat->pommes > 0) || (contrat->soleils > 0) || (contrat->oignons > 0) || (contrat->mandarines > 0))
    {
        joueur->vie = joueur->vie - 1;
        if (joueur->vie == 0)
        {
            setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf ("\n\n\n\tGAME OVER!!\n");
            setColor(FOREGROUND_WHITE);

            getch();
        }
        else
        {
            setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("\n\n\n\tVous avez perdu ce niveau!!\n");
            setColor(FOREGROUND_WHITE);

            getch();

            while (c)
            {
                affiche_transition_perdu(transition_pos);
                switch (getch())
                {
                    case '8' :
                        transition_pos = (transition_pos + 1)% 2;
                        break;

                    case '2' :
                        transition_pos = (transition_pos + 1)% 2;
                        break;

                    case ' ' :
                    {
                        // Différent cas en fonction de la position du curseur
                        switch (transition_pos)
                        {
                            case 0 :
                                jouer (joueur,contrat);
                                c = 0;
                                break;

                            case 1 :
                                sauvegarde_fichier(joueur);
                                c = 0;
                                break;
                        }
                    }
                }
            }
        }
    }
    // Si le joueur a gagné
    else
    {
        joueur->niveau++;

        setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("\n\n\n\tVous avez reussi ce niveau!!\n");
        setColor(FOREGROUND_WHITE);

        getch();

        while (c)
        {
            affiche_transition_gagne(transition_pos);
            switch (getch())
            {
                case '8' :
                    transition_pos = (transition_pos + 1)% 2;
                    break;

                case '2' :
                    transition_pos = (transition_pos + 1)% 2;
                    break;

                case ' ' :
                {
                    // Différent cas en fonction de la position du curseur
                    switch (transition_pos)
                    {
                        case 0 :
                            jouer (joueur,contrat);
                            c = 0;
                            break;

                        case 1 :
                            sauvegarde_fichier(joueur);
                            c = 0;
                            break;
                    }
                }
            }

        }

    }
}
