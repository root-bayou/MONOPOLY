#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FonctionPrincipales.h"
#include <ctype.h>
#include "lesStructures.h"
#include <time.h>

int main(void)
{

    // déclaration des variables

    int i = 1, nombreDesJoueurs;
    char nb[20];
    char o[5];
    // Declaration des Cases de jeux

    printf("///////////////////////////////////////////////////////////////////////////// BIENVENUE AU JEU DU MONOPOLY/////////////////////////////////////////////////////////////////// \n");
    puts("...                                   __   \n") ;
    puts("                               ___   (_ )  \n") ;
    puts("...                          _[___]_  //   \n") ;
    puts("                               @ @   //    \n") ;
    puts("...                       oOOo-(_)--P_}    \n") ;	
    puts("Combien de joueurs êtes-vous. Le nombre maximum accepté est de 4 : ");
    scanf("%s", nb);
    while (1) // BOUCLE INFINIE JUSQUA A LA SAISIE DU BON NOMBRE
    {

        if (verfieLeNombreJoueur(nb) == 0)
        {
            // SI LE NOMBRE EST INCORRECT ON RE-DEMANDE !
            printf("! DONNEZ UN CHIFRE ENTRE 2 ET 4 ! UN SEUL CARACTERE AUTORISE MERCI  : ");
            scanf("%s", nb);
        }

        else
        { // OK , ON RECCUPERE LE NOMBRE DE JOUEUR
            nombreDesJoueurs = verfieLeNombreJoueur(nb);
            break;
        }
    }

    srand(time(NULL));
    do // BOUCLE POUR LES NOMBRE DE PARTIE DE JEU !!! 
    {
        nouvellePartie(nombreDesJoueurs);
        printf("VOULEZ VOUS REJOUEZ TAPEZ 1 Si OUI. TAPEZ 2 SI NON : ");
        scanf("%s", o);
        if (ChoixaAction(o) == 1)
        {
            printf("VOULEZ VOUS CHANGEZ LE NOMBRE DE PARTICIPANTS ? : ");
            scanf("%s", nb);
            while (1) // BOUCLE INFINIE JUSQUA A LA SAISIE DU BON NOMBRE
            {

                if (verfieLeNombreJoueur(nb) == 0)
                {
                    // SI LE NOMBRE EST INCORRECT ON REDEMANDE !
                    printf("! DONNEZ UN CHIFRE ENTRE 2 ET 4 ! UN SEUL CARACTERE EST AUTORISÉ MERCI  : ");
                    scanf("%s", nb);
                }

                else
                { // OK , ON RECUPERE LE NOMBRE DE JOUEUR
                    nombreDesJoueurs = verfieLeNombreJoueur(nb);
                    break;
                }
            }
        }

    } while (ChoixaAction(o) == 1);

    return EXIT_SUCCESS;
}
