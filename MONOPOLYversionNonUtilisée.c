#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>


#define MAXCASES 39
#define MAXJOUEURS 4
#define MAXMAISONS 32
#define MAXHOTELS 12
#define MAXCOMMUNAUTE 16
#define MAXCHANCE 16

/* BESOIN DE VARIABLES GLOBALES :
 * maisonsconstruits : compte le nombre de maisons sur le plateau, pour s'assurer qu'il ne dépasse pas MAXMAISONS
 * hotelsconstruits : même chose, pour les hôtels
 * nbjoueurs (ou autre nom ?) : calcule le nombre de joueurs en jeu, victoire si = 1
*/

typedef struct s_joueurs
{
    char 	nom					;
    char	alpha				;
    int		ordrejeu        	;

    int 	humain 				;

    int 	position			;

    int 	argent				;

    //Inutile pour l'instant :
    char construction           ;

    int 	autorisation  		;
    int 	tourjeu				;

    int     carteprison         ;
    int     sortieprison        ;
} joueurs ;


typedef struct s_cases
{
    char 	nom					;
    int     position            ;

    int 	prix				;

    char	proprietaire		;
    int 	possibleconstruct	;
    int    	construction        ;
    int		prixmaison			;

    int		statuthypotheque	;
    int     hypotheque  	    ;
    int		leverhypotheque 	;
} cases ;


void verif(char mot[])      ;
void demarrer()             ;
void options()              ;
void continuer()            ;
void jouer()                ;
void construire()           ;
void echanger()             ;
void hypothequer()          ;


int main()
{
    int choix;

    choix = -1;
    while(choix != 0)
    {
        printf("======= MONOPOLY v0.1 =======\n");
        printf("Jeu du Monopoly - projet PISE\n\n") ;
        printf("Projet par Imane & Laurent\n\n") ;
        printf("-1- Demarrer une partie \n") ;
        printf("-2- Options de jeu \n") ;
        printf("-3- Continuer une partie \n") ;
        printf("-4- ***** \n") ;

        printf("-0- Quitter \n") ;
        printf("Choix : ") ;
        scanf("%d", &choix) ;
        printf("=============================\n");

        switch(choix)
        {
            case 1 :	demarrer() ;
                break ;

            /*
            case 2 :	options() ;
                break ;
            case 3 :	continuer() ;
                break ;
            case 4 :	****() ;
                break ;
            FAIRE UN CAS "REGLES", comme Arthur et Jordane ?
            */

            case 0 :	printf("Au revoir\n");
                break ;
            default :	printf("Choix erroné\n");
                break ;
        }
    }
}

void verif(char mot[])
{
    int taille ;
    int i ;

    taille = strlen(mot);

    for (i=0; i<taille; i++)
    {
        mot[i] = toupper(mot[i]);
    }
}



void jouer()
{
    int nbjoueurs ;
    int i=1 ;
    int j ;
    char joueurs.nom[11] ;
    int premierjoueur ;

    printf("Sélectionner le nombre de joueurs pour cette partie (2 à 4) : ");
    scanf("%d", &nbjoueurs);

    if (nbjoueurs < 2 | nbjoueurs > 4)
    {
        printf("Choix erroné. Indiquez un autre choix : ");
        scanf("%d", &nbjoueurs);
    }



    while (i < (nbjoueurs + 1 ) ) {
        printf("Indiquez le nom du joueur %d (10 caracteres maximum) : ", i) ;
        scanf("%s", joueurs[i].nom) ;

        if (strlen(joueurs[i].nom) > 10)
            printf("Le nom est trop long. Choisissez-en un autre. \n");
        else
        {
            i++ ;
            joueurs[i].humain = 1;
        }

/*		switch(i)
		{
			case 1 :	couleur = JBLEU ;
								break ;
			case 2 :	couleur = JROUGE ;
								break ;
			case 3 :	couleur = JVERT ;
								break ;
			case 4 :	couleur = JCYAN ;
								break ;
			case 5 :	couleur = JROSE ;
								break ;
        	case 6 :	couleur = JMARRON ;
								break ;
		}
*/

        printf("Bienvenue dans le jeu, %s. Votre pion sera : %c \n", joueurs[i].nom, toupper(joueurs[i].nom[0]))  ;

    }  ;

    printf("La partie va commencer. Mais il reste à determiner qui sera la première personne à jouer. \n");
    sleep(2);
    printf("...                                   __   \n") ;
    printf("                               ___   (_ )  \n") ;
    printf("...                          _[___]_  //   \n") ;
    printf("                               @ @   //    \n") ;
    printf("...                       oOOo-(_)--P_}    \n") ;
    printf("           				           //      \n") ;
    sleep(2);
    premierjoueur = ( rand() % nbjoueurs) + 1 ;

//check +1 ?
    for(i=0; i < nbjoueurs; i++)
    {
        j = premierjoueur + i ;
        if(j <= nbjoueurs)
            joueurs[j].ordrejeu = i ;
        else
            joueurs[(j + 1) % nbjoueurs].ordrejeu = i ;
    }


    printf("Et c'est %s qui lance les des le premier. \n", joueurs[premierjoueur].nom);
    printf("Bonne chance a tous les %d. \n", nbjoueurs);

}


void tour()
{
    int choix;

    choix = -1;
    while(choix != 0)
    {
        printf("%s c'est à votre tour de jouer \n", joueurs.nom) ;
        printf("-1-jouer  -2-construire -3-échanger \n") ;
        printf("-4-hypothéquer  -5-terminer \n") ;
        printf("-9-sauvegarder  -0- Quitter \n") ;
        printf("Choix : ") ;
        scanf("%d", &choix) ;

        /*
         problème du CASE / IF toujours à régler
         terminer() et sauvegarder() inutile pour l'instant
         tour suivant à mettre en place
        */

        switch(choix)
        {
            case 1 :	if (joueurs.autorisation != 0)
                    printf("Vous avez déjà joué ! \n");
                else
                    jouer() ;
                break ;
            case 2 :	construire() ;
                break ;
            case 3 :	echanger() ;
                break ;
            case 4 :	hypothequer() ;
                break ;
            case 5 :	if (joueurs.autorisation = 0)
                    printf("Vous n'avez pas joué, impossible de terminer le tour !");
                else
                    terminer() ;
                break ;
            case 9 :	sauvegarder() ;
                break ;
            case 0 :	printf("Au revoir, à bientôt \n");
                break ;
            default :	printf("Choix erroné. Indiquez un autre choix\n");
                break ;
        }
    }
}


void construire()
{
    char pion ;
    int prix ;
    int propriete ;
    int aconstruire;
    int disponible ;

    printf("Vous souhaitez construire sur une de vos propriétés. \n") ;
    printf("Quelle est la propriété concernée ? Indiquez son emplacement : ");
    scanf("%d", propriete) ;


    if (strcmp(cases[propriete].proprietaire, joueurs[***].alpha) != 0)
    {
        printf("Il y a un problème. Cette case ne vous appartient pas.\n") ;
    }
    else (strcmp(cases[propriete].proprietaire, joueurs[***].alpha) == 0)
    {
        if (cases[propriete].possibleconstruct == 0)
        {
            printf("Il n'est pas possible de construire sur cet emplacement. \n");
        }
        else (cases[propriete].possibleconstruct == 1)
        {
            if (cases[propriete].construction == 5)
            {
                printf("Impossible de construire plus, vous avez déjà un hôtel construit ici ! \n");
            }
            else
            {
                printf("Vous avez déjà %d maison-s- sur cet emplacement. \n", cases[propriete].construction);
                printf("Le prix pour construire une maison ou un hôtel sur cet emplacement est de %d euros \n", cases[propriete].prixmaison) ;
                printf("Combien de bâtiments souhaitez-vous construire ? Le maximum autorisé est de 5, ce qui équivaut à un hôtel : ") ;
                scanf("%d", aconstruire) ;
                if (((cases[propriete].construction + aconstruire) < 0) || ((cases[propriete].construction + aconstruire) > 5))
                {
                    printf("Le nombre de bâtiments sur une case doit être compris entre 0 et 5 !\n");
                }
                else
                {
                    if ((cases[propriete].construction + aconstruire) < 5)
                    {
                        if((maisonsconstruits + aconstruire) > MAXMAISONS)
                        {
                            printf("Il y a un problème : il n'y a pas assez de maisons disponibles. \n") ;
                            disponible = MAXMAISONS - maisonsconstruits ;
                            if (disponible <= 0)
                            {
                                printf("Il n'en reste plus. \n") ;
                            }
                            else
                            {
                                printf("Il n'en reste que %d. \n", disponible) ;
                            }
                        }
                        else
                        {
                            maisonsconstruits += aconstruire ;
                            joueurs.argent -= (aconstruire * cases[propriete].prixmaison) ;
                            cases[propriete].construction += aconstruire ;
                            printf("Vous avez désormais %d maison-s- sur %s", cases[propriete].construction, cases[propriete].nom);
                        }
                    }
                    else ((cases[propriete].construction + aconstruire) == 5)
                    {
                        if ((hotelconstruits + 1) > MAXHOTELS)
                        {
                            printf("Il y a un problème : il n'y a plus d'hôtel disponible pour la construction. \n") ;
                        }
                        else
                        {
                            hotelconstruits += 1 ;
                            maisonsconstruits -= cases[propriete].construction ;
                            joueurs.argent -= (aconstruire * cases[propriete].prixmaison) ;
                            cases[propriete].construction += aconstruire ;
                            printf("Vous avez désormais un hôtel sur %s", cases[propriete].nom);
                        }
                    }
                }
            }
        }
    }
}

void echanger()
{
    char pion       ;
    int prix        ;
    int propriete   ;
    char reponse    ;
    int valide      ;
    int i           ;
    int couleur     ;
    int probleme    ;

    valide = 0 ;
    reponse = "NON" ;

    printf("Vous vous êtes mis d'accord avec un joueur pour procéder à un échange.\n") ;
    printf("Merci de n'échanger qu'une seule propriété à la fois.\n") ;
    printf("Il faut à présent indiquer les conditions de la transaction.\n") ;
    printf("Indiquez le pion du joueur concerné : ") ;
    scanf("%c", pion) ;
    verif(pion) ;

	for(i=0; i<nbjoueurs; i++)
        {
            i =+ 1 ;
            if (strcmp(joueurs[i].alpha, pion) != 0)
            valide = 1 ;
        }

    if (valide == 0)
        {
            printf("Ce joueur n'existe pas. Indiquez un autre pion valide : ") ;
        }
    else (valide == 1)
        {
            while (strcmp(reponse, "OUI") != 0)
                {
                    printf("Quelle est la propriété concernée ? Indiquez son emplacement : ");
                    scanf("%d", &propriete) ; 

                    if ((strcmp(cases[propriete].proprietaire, joueurs[***].alpha) != 0) && (strcmp(cases[propriete].proprietaire, pion) != 0))
                        {
                            printf("Il y a un problème : ni vous, ni le joueur indiqué n'êtes propriétaire de la case ! \n");
                            reponse = "OUI" ;
                        }
                    else 
                        {
                            probleme = 0 ;
                            couleur = cases[propriete].typeCouleur

                            for(i=0; i<(MAXCASES+1); i++)
                            /* +1 ou pas ? */
                                {                            
                                    if ((cases[i].typeCouleur == couleur) && (cases[i].construction != 0))
                                        {
                                            probleme = 1 ;
                                        }
                                }
                            if (probleme == 1)
                                {
                                    printf("Impossible de procéder à l'échange. \n");
                                    printf("Il y a des bâtiments construits sur au moins une propriété de cette couleur. \n");
                                    printf("Il ne faut aucun bâtiment pour que l'échange soit autorisé. \n");
                                }
                            else
                                {
                                    printf("Pour combien d'euros souhaitez-vous l'échanger ? \n");
                                    scanf("%d", &prix) ;
                                    if (prix < 0)
                                        {
                                            printf("Le montant doit être supérieur ou égal à zéro. \n");
                                        }
                                    else (prix >= 0)
                                        {
                                            if (strcmp(cases[propriete].proprietaire, joueurs[***].alpha) == 0)
                                                {
                                                cases[propriete].proprietaire = pion ;
                                                joueurs[***].argent -= prix ;
                                                joueurs[***].argent += prix ;
                                                printf("La transaction est-elle complète ? \"oui\" pour la finaliser, \"non\" pour la continuer") ;  
                                                scanf("%s", reponse);
                                                verif(reponse) ;
                                                }
                                            else (strcmp(cases[propriete].proprietaire, pion) == 0)
                                                {
                                                cases[propriete].proprietaire = joueurs[***].alpha ;
                                                joueurs[***].argent -= prix ;
                                                joueurs[***].argent += prix ;
                                                printf("La transaction est-elle complète ? \"oui\" pour la finaliser, \"non\" pour la continuer") ;  
                                                scanf("%s", reponse);
                                                verif(reponse) ;
                                                }
                                        }
                                } 
                        }
                }
        }
}

void hypothequer()
{
    char pion               ;
    int prix                ;
    int propriete           ;
    char reponse            ;
    int venteconstruction   ;


    printf("Quelle est la propriété concernée ? Indiquez son emplacement : ");
    scanf("%d", &propriete) ;

    if (cases[(propriete+1)].proprietaire != joueurs.alpha)
        printf("Seriez vous un tricheur ? Cette case ne vous appartient pas !");
    else
    {
        if (cases[(propriete+1)].statuthypotheque = 1)
        {
            printf("Cet emplacement est hypothéqué. Voulez-vous lever l'hypothèque pour %d euros ? \n", cases[(propriete+1)].leverhypotheque);
            printf("Tapez \"oui\" sinon, annulez : \"non\" : ") ;
            scanf("%s", reponse) ;
            verif(reponse) ;

            while(strcmp(reponse, "OUI") != 0 && strcmp(reponse, "NON") != 0)
            {
                printf("Vous n'avez pas répondu \"oui\" ou \"non\" : ");
                scanf("%s", reponse);
                verif(reponse) ;
            }
            if (strcmp(reponse, "OUI") == 0)
            {
                joueurs.argent -= cases[(propriete+1)].leverhypotheque ;
                cases[(propriete+1)].statuthypotheque = 0 ;
            }
            else (strcmp(reponse, "NON") == 0)
            {
                /* code */
            }
        }
        else (cases[(propriete+1)].statuthypotheque = 0)
        {
            printf("Souhaitez-vous hypothéquer cet emplacement pour %d euros ? \n", cases[(propriete+1)].hypotheque);
            printf("Tapez \"oui\" sinon, annulez : \"non\" : ") ;
            scanf("%s", reponse) ;
            verif(reponse) ;

            while(strcmp(reponse, "OUI") != 0 && strcmp(reponse, "NON") != 0)
            {
                printf("Vous n'avez pas répondu \"oui\" ou \"non\" : ");
                scanf("%s", reponse);
                verif(reponse) ;
            }
            if (strcmp(reponse, "OUI") == 0)
            {
                if (cases[(propriete+1)].construction != NULL)
                {
                    printf("Il faut d'abord vendre les constructions de l'emplacement. \n");
                    venteconstruction = (cases[(propriete+1)].prixmaison * cases[(propriete+1)].construction) / 2  ;
                    printf("Cela vous rapporte %d.", venteconstruction) ;
                    joueurs.argent += cases[(propriete+1)].hypotheque ;
                    cases[(propriete+1)].statuthypotheque = 1 ;
                    printf("L'emplacement est désormais hypothéqué. Vous touchez %d de plus.", cases[(propriete+1)].hypotheque) ;
                }
                else (cases[(propriete+1)].construction = NULL)
                {
                    joueurs.argent += cases[(propriete+1)].hypotheque ;
                    cases[(propriete+1)].statuthypotheque = 1 ;
                    printf("L'emplacement est désormais hypothéqué. Vous touchez %d.", cases[(propriete+1)].hypotheque) ;
                }
            }
            else (strcmp(reponse, "NON") == 0)
            {
                /* code */
            }
        }
    }
}

void lancer()
{
    int i, paire = 0 ;
    int lanceDe1, lanceDe2 ;
    char reponse ;

    lanceDe1 = ( rand() %6 ) + 1 ;
    lanceDe2 = ( rand() %6 ) + 1 ;

    if ((joueurs.position == 10) && (joueurs.sortieprison > 0 ))
    {
        printf("Vous êtes en prison pour %d tours", joueurs.sortieprison) ;
        if (joueurs.carteprison > 0)
        {
            printf("Vous possédez une carte \"Sortie de prison\". \n") ;
            printf("Souhaitez-vous l'utiliser ? Indiquez \"oui\" ou \"non\" : ") ;
            scanf("%s", reponse) ;
            verif(reponse) ;

            while(strcmp(reponse, "OUI") != 0 && strcmp(reponse, "NON") != 0)
            {
                printf("Vous n'avez pas répondu \"oui\" ou \"non\" : ") ;
                scanf("%s", reponse) ;
                verif(reponse) ;
            }

            if (strcmp(reponse, "OUI") == 0)
            {
                printf("Vous utilisez votre autorisation : vous êtes libéré. Les dés sont lancés. \n") ;
                printf("Vous avez obtenu %d et %d. \n", lanceDe1, lanceDe2) ;
                joueurs.carteprison -= 1 ;
                joueurs.sortieprison = 0 ;
                joueurs.position += (lanceDe1 + lanceDe2) ;
                joueurs.autorisation = 1 ;
                joueurs.tourjeu += 1 ;
            }
            else (strcmp(reponse, "NON") == 0)
            {
                printf("Vous pouvez payer 50 euros pour sortir de prison. \n") ;
                printf("Souhaitez-vous le faire ? Indiquez \"oui\" si c'est le cas : ") ;
                scanf("%s", reponse) ;
                verif(reponse) ;

                if (strcmp(reponse, "OUI") != 0)
                {
                    scanf("Vous êtes libre. Les dés sont lancés. \n")
                    printf("Vous avez obtenu %d et %d. \n", lanceDe1, lanceDe2) ;
                    joueurs.argent -= 50 ;
                    joueurs.sortieprison = 0 ;
                    joueurs.position += (lanceDe1 + lanceDe2) ;
                    joueurs.autorisation = 1 ;
                    joueurs.tourjeu += 1 ;
                }
                else
                {
                    printf("Jetez les dés. Si vous obtenez un double, vous serez libéré. \n") ;
                    joueurs.sortieprison -= 1 ;
                    if((joueurs.sortieprison == 0) & lanceDe1 != lanceDe2)
                    {
                        printf("Raté. Vous avez obtenu %d et %d. \n", lanceDe1, lanceDe2) ;
                        printf("Vous serez libre au prochain tour. Vous payez 50 euros pour votre future remise en liberté.") ;
                        joueurs.argent -= 50 ;
                        joueurs.autorisation = 1 ;
                        joueurs.tourjeu += 1 ;
                    }
                    if (lanceDe1 == lanceDe2)
                    {
                        printf("Bien joué ! Vous avez obtenu un double : %d et %d, vous êtes libre. \n", lanceDe1, lanceDe2 ) ;
                        joueurs.sortieprison = 0 ;
                        joueurs.position += (lanceDe1 + lanceDe2) ;
                        joueurs.autorisation = 1 ;
                        joueurs.tourjeu += 1 ;
                    }
                    else
                    {
                        printf("Raté. Vous avez obtenu %d et %d. \n", lanceDe1, lanceDe2) ;
                        joueurs.autorisation = 1 ;
                        joueurs.tourjeu += 1 ;
                    }
                }
            }
        }
        else
        {
            printf("Vous pouvez payer 50 euros pour sortir de prison. \n") ;
            printf("Souhaitez-vous le faire ? Indiquez \"oui\" si c'est le cas : ") ;
            scanf("%s", reponse) ;
            verif(reponse) ;

            if (strcmp(reponse, "OUI") != 0)
            {
                scanf("Vous êtes libre. Les dés sont lancés. \n") ;
                printf("Vous avez obtenu %d et %d. \n", lanceDe1, lanceDe2) ;
                joueurs.argent -= 50 ;
                joueurs.sortieprison = 0 ;
                joueurs.position += (lanceDe1 + lanceDe2) ;
                joueurs.autorisation = 1 ;
                joueurs.tourjeu += 1 ;
            }
            else
            {
                printf("Jetez les dés. Si vous obtenez un double, vous serez libéré. \n") ;
                joueurs.sortieprison -= 1 ;
                if((joueurs.sortieprison == 0) & lanceDe1 != lanceDe2)
                {
                    printf("Raté. Vous avez obtenu %d et %d. \n", lanceDe1, lanceDe2) ;
                    printf("Vous serez libre au prochain tour. Vous payez 50 euros pour votre future remise en liberté.") ;
                    joueurs.argent -= 50 ;
                    joueurs.autorisation = 1 ;
                    joueurs.tourjeu += 1 ;
                }
                if (lanceDe1 == lanceDe2)
                {
                    printf("Bien joué ! Vous avez obtenu un double : %d et %d, vous êtes libre. \n", lanceDe1, lanceDe2 ) ;
                    joueurs.sortieprison = 0 ;
                    joueurs.position += (lanceDe1 + lanceDe2) ;
                    joueurs.autorisation = 1 ;
                    joueurs.tourjeu += 1 ;
                }
                else
                {
                    printf("Raté. Vous avez obtenu %d et %d. \n", lanceDe1, lanceDe2) ;
                    joueurs.autorisation = 1 ;
                    joueurs.tourjeu += 1 ;
                }
            }
        }
    }
    else
    {
        printf("Vous avez obtenu %d et %d \n", lanceDe1, lanceDe2 ) ;

        if (lanceDe1 == lanceDe2)
        {
            paire = paire + 1 ;
            printf("Vous avez tiré un double. Vous pourrez lancer les dés à nouveau. \n") ;

            if (paire == 3)
            {
                printf("Trois doubles à la suite. Pas de chance, vous êtes bon pour la prison. \n") ;
                joueurs.position = 10 ;
                joueurs.sortieprison = 3 ;
                joueurs.autorisation = 1 ;
                joueurs.tourjeu += 1 ;
            }
        }
        else
        {
            joueurs.position += (lanceDe1 + lanceDe2) ;
            joueurs.autorisation = 1 ;
            joueurs.tourjeu += 1 ;
        }

        if (joueurs.position > 40)
        {
            joueurs.position = joueurs.position % 40 ;
            joueurs.argent += 200 ;
        }
    }
}

void terminer()
{
    char reponse ;

    if (joueurs.autorisation == 0)
    {
        printf("Impossible de terminer votre tour de jeu, vous n'avez pas lancé les dés. \n") ;
        /*RETOUR AU TOUR*/
    }
    else
    {
        if (joueurs.argent < 0)
        {
            printf("Votre solde est négatif. Il affiche %d euros. Il vous faut de l'argent sur votre compte pour continuer à jouer. \n", joueurs.argent) ;
            printf("Vendez des bâtiments, hypothéquez ou échangez des propriétés pour trouver de l'argent. \n") ;
            printf("Autrement, il vous faut abandonner la partie. La situation est-elle désespérée ? Tapez \"oui\"") ;
            scanf("%s", reponse) ;
            verif(reponse) ;
            if (strcmp(reponse, "OUI") != 0)
            {
                printf("  \n") ;
                printf("     ///\\       ") ;
                printf("     C ++       ") ;
                printf("     \\  '       ") ;
                printf("      \\_0       ") ;
                printf("  \n") ;
                sleep(2) ;
                scanf("Désolé, vous avez perdu.") ;
                ****nbjoueurs -= 1 ;
                /*TOUR SUIVANT*/
            }
            else
            {
                /*RETOUR AU TOUR*/
            }

        }
        else
        {
            if (***nbjoueurs == 1)
            {
                printf("Vous êtes le dernier joueur sur le plateau. \n") ;
                sleep(2) ;
                printf("Ma parole ! Mais cela signifie... \n") ;
                printf("...Que... \n") ;
                sleep(2) ;
                printf("...Que... \n") ;
                sleep(1)) ;
                printf("    \\ O /    \\ O /    \\ O / \n") ;
                printf("      |        |        |   \n") ;
                printf("     / \\      / \\      / \\  \n") ;
                sleep(2)) ;
                printf("VOUS AVEZ GAGNE ! \n") ;
                printf("  \n") ;
                printf("Félicitations vous avez emporté le pactole ! \n") ;
                printf("Vous détenez le monopole. \n") ;
                printf("  \n") ;
            }
            else
            {
                /*TOUR SUIVANT*/
            }
        }
    }
}


/*à compléter - ou mettre celui d'Imane à la place*/
void tiragecarte()
{
    int i ;
    int tirage ;

    if ()
        tirage = ( rand() %16 ) + 1 ;
    else
        tirage = ( rand() %15 ) + 1 ;
}