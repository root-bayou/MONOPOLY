#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FonctionPrincipales.h"
#include <ctype.h>
#include "lesStructures.h"
#include <time.h>

int quiOccupe(Joueur jr[], int a) // Fonction pour vérifier quel joueur occupe la case
{

    if (jr[1].tabAcqui[a] == 1)
    {
        return 1;
    }
    else if (jr[2].tabAcqui[a] == 1)
    {
        return 2;
    }
    else if (jr[3].tabAcqui[a] == 1)
    {
        return 3;
    }
    else if (jr[4].tabAcqui[a] == 1)
    {
        return 4;
    }
}
void afficheCarte(lesCases cas[], int a)
{ // PROCÉDURE D'AFFICHAGE DES INFORMATIONS DE CHAQUES CASES PAR TYPES DE CASE.

    if (a == 1 || a == 3)
    {
        printf("\033[1;37m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||    LA CASE EST OCCUPÉE                \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 6 || a == 8 || a == 9)
    {
        printf("\033[01;34m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 11 || a == 13 || a == 14)
    {
        printf("\033[1;35m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 16 || a == 18 || a == 19)
    {
        printf("\033[1;36m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 21 || a == 23 || a == 24)
    {
        printf("\033[00;31m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 26 || a == 27 || a == 29)
    {
        printf("\033[0;33m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 31 || a == 32 || a == 34)
    {
        printf("\033[1;32m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 37 || a == 39)
    {
        printf("\033[00;34m");
        printf("||           %s                     \n", cas[a].couleurDelaCase);
        printf("||   %s PRIX D'ACHAT %d €           \n", cas[a].nomCase, cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-Groupe    %d €           \n", cas[a].loyerAvecGroupe);
        printf("||   Loyer-1M        %d €           \n", cas[a].loyerAvecUneMaison);
        printf("||   Loyer-2M        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3M        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4M        %d €           \n", cas[a].loyerAvecQuatreMaison);
        printf("||   Loyer-HOTEL     %d €           \n", cas[a].loyerAvecHotel);
        printf("||   Prix -M         %d €           \n", cas[a].prixmaison);
        printf("||   Prix-Hotel      %d €           \n", cas[a].prixHotel);
        printf("||   HYPOTHÈQUE      %d €           \n", cas[a].prixHypo);
        printf("||   LEV- HYPOTHÈQUE %d €           \n", cas[a].prixLeverHypo);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }
    else if (a == 5 || a == 15 || a == 25 || a == 35)
    {
        printf("\033[00m");
        printf("||   %s                             \n", cas[a].nomCase);
        printf("||   PRIX D'ACHAT    %d €           \n", cas[a].prixDachat);
        printf("||   Loyer           %d €           \n", cas[a].loyerSimple);
        printf("||   Loyer-2G        %d €           \n", cas[a].loyerAvecDeuxMaison);
        printf("||   Loyer-3G        %d €           \n", cas[a].loyerAvecTroisMaison);
        printf("||   Loyer-4G        %d €           \n", cas[a].loyerAvecQuatreMaison);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA GARE EST LIBRE             \n");
        }
    }
    else if (a == 4 || a == 38)
    {
        printf("||   IMPOT    ||\n");
        printf("|| PAYEZ 200 €||\n");
    }
    else if (a == 12 || a == 28)
    {
        printf("||   %s                             \n", cas[a].nomCase);
        printf("||   PRIX D'ACHAT    %d €           \n", cas[a].prixDachat);
        if (cas[a].occupe == 1)
        {
            printf("||     LA CASE EST OCCUPÉE                   \n");
        }
        else
        {
            printf("||     LA CASE EST LIBRE             \n");
        }
    }

    printf("\033[00m");
}

void nouvellePartie(int partie)

{ // ENREGISTREMENT DES VALEURS DANS UN TABLEAU DE 12 LIGNES ET 40 COLONNES DANS L'ORDRE DES CASES 
    int tabPrix[12][40] = {{0, 60, 0, 60, 0, 200, 100, 0, 100, 120, 0, 140, 150, 140, 160, 200, 180, 0, 180, 200, 0, 220, 0, 220, 240, 200, 260, 260, 150, 280, 0, 300, 300, 0, 320, 200, 0, 350, 0, 400},
                           {0, 2, 0, 4, 0, 25, 6, 0, 6, 8, 0, 10, 0, 10, 12, 25, 14, 0, 14, 16, 0, 18, 0, 18, 20, 25, 22, 22, 0, 24, 0, 26, 26, 0, 28, 25, 0, 35, 0, 50},
                           {0, 4, 0, 8, 0, 0, 12, 0, 12, 16, 0, 20, 0, 20, 24, 0, 28, 0, 28, 32, 0, 36, 0, 36, 40, 0, 44, 44, 0, 48, 0, 52, 52, 0, 56, 0, 0, 70, 0, 100},
                           {0, 10, 0, 20, 0, 0, 30, 0, 30, 40, 0, 50, 0, 50, 60, 0, 70, 0, 70, 80, 0, 90, 0, 90, 100, 0, 110, 110, 0, 120, 0, 130, 130, 0, 150, 0, 0, 175, 0, 200},
                           {0, 30, 0, 60, 0, 50, 90, 0, 90, 100, 0, 150, 0, 150, 180, 50, 200, 0, 200, 220, 0, 250, 0, 250, 300, 50, 330, 330, 0, 360, 0, 390, 390, 0, 450, 50, 0, 500, 0, 600},
                           {0, 90, 0, 180, 0, 100, 270, 0, 270, 300, 0, 450, 0, 450, 500, 100, 550, 0, 550, 600, 0, 700, 0, 700, 750, 100, 800, 800, 0, 850, 0, 900, 900, 0, 1000, 100, 0, 1100, 0, 1400},
                           {0, 160, 0, 320, 0, 200, 400, 0, 400, 450, 0, 625, 0, 625, 700, 200, 750, 0, 750, 800, 0, 875, 0, 875, 925, 200, 975, 975, 0, 1025, 0, 1100, 1100, 0, 1200, 200, 0, 1300, 0, 1700},
                           {0, 250, 0, 450, 0, 0, 550, 0, 550, 600, 0, 750, 0, 750, 900, 0, 950, 0, 950, 1000, 0, 1050, 0, 1050, 1100, 0, 1150, 1150, 0, 1200, 0, 1275, 1275, 0, 1400, 0, 0, 1500, 0, 2000},
                           {0, 50, 0, 50, 0, 0, 50, 0, 50, 50, 0, 100, 0, 100, 100, 0, 100, 0, 100, 100, 0, 150, 0, 150, 150, 0, 150, 150, 0, 150, 0, 200, 200, 0, 200, 0, 0, 200, 0, 200},
                           {0, 50, 0, 50, 0, 0, 50, 0, 50, 50, 0, 100, 0, 100, 100, 0, 100, 0, 100, 100, 0, 150, 0, 150, 150, 0, 150, 150, 0, 150, 0, 200, 200, 0, 200, 0, 0, 200, 0, 200},
                           {0, 30, 0, 30, 0, 100, 50, 0, 50, 60, 0, 70, 75, 70, 80, 100, 90, 0, 90, 100, 0, 110, 0, 110, 120, 100, 130, 130, 75, 140, 0, 150, 150, 0, 160, 100, 0, 175, 0, 200},
                           {0, 33, 0, 33, 0, 110, 55, 0, 55, 66, 0, 77, 83, 77, 88, 110, 99, 0, 99, 110, 0, 121, 0, 121, 132, 110, 143, 143, 83, 154, 0, 165, 165, 0, 176, 110, 0, 193, 0, 220}

    };

    char tabnom[40][30] = { // Tableau de char , enregistrement des noms des cases 
        "CASE DÉPART",
        "BELLEVILLE",
        "CAISSE DE COMMUNAUTÉ",
        "LECOURBE",
        "IMPÔTS",
        "GARE MONTPARNASSE",
        "VAUGIRARD",
        "CARTE CHANCE",
        "COURCELLES",
        "RÉPUBLIQUES",
        "SIMPLE VISITE",
        "LA VILLETTE",
        "CIE ÉLECTRICITÉ",
        "NEUILLY",
        "PARADIS",
        "GARE DE LYON",
        "MOZART",
        "CAISSE DE COMMUNAUTÉ",
        "SAINT-MICHEL",
        "PIGALLE",
        "PARC GRATUIT",
        "MATIGNON",
        "CARTE CHANCE",
        "MALESHERBES",
        "HENRI-MARTIN",
        "GARE DU NORD",
        "SAINT-HONORÉ",
        "LA BOURSE",
        "CIE DES EAUX",
        "LA FAYETTE",
        "ALLEZ EN PRISON",
        "BRETEUIL",
        "FOCH",
        "CAISSE DE COMMUNAUTÉ",
        "CAPUCINES",
        "GARE SAINT-LAZARE",
        "CARTE CHANCE",
        "CHAMPS-ÉLYSÉES",
        "TAXE DE LUXE",
        "LA PAIX",

    };
    char tabCol[40][30] = { // Tableau de char enregistrement de la couleur de chaques cases 
        "NEUTRE",
        "GRIS",
        "NEUTRE",
        "GRIS",
        "NEUTRE",
        "NEUTRE",
        "BLEUCIEL",
        "NEUTRE",
        "BLEUCIEL",
        "BLEUCIEL",
        "NEUTRE",
        "VIOLET",
        "NEUTRE",
        "VIOLET",
        "VIOLET",
        "NEUTRE",
        "CYAN",
        "NEUTRE",
        "CYAN",
        "CYAN",
        "NEUTRE",
        "ROUGE",
        "NEUTRE",
        "ROUGE",
        "ROUGE",
        "NEUTRE",
        "JAUNE",
        "JAUNE",
        "NEUTRE",
        "JAUNE",
        "NEUTRE",
        "VERT",
        "VERT",
        "NEUTRE",
        "VERT",
        "NEUTRE",
        "NEUTRE",
        "BLEU",
        "NEUTRE",
        "BLEU",
    };
    char tabCartCom[16][200] = { // Tableau de chaines de caractéres " cartes communauté" 
        "Vous héritez de 100€",
        "C'est votre anniversaire recevez 10€ de chaque joueur.",
        "Recevez 25€ d'honoraires de consultation.",
        "Allez en prison. Allez tout droit en prison ne passez pas par la case de départ. Ne recevez pas 200€.",
        "Frais d'hospitalisation payez 100€.",
        "Remboursement des impots sur le revenu recevez 20€."
        "votre caisse de vacances vous rapporte. Recevez 100€.",
        "Frais de scolarité payez 50€.",
        "Votre assurance vie vous rapporte.Recevez 100€.",
        "Vous etes liberé de prison. cette carte peut etre conservée jusqu'à ce qu'elle soit utilisée.échangée ou vendue.",
        "Honoraires du médecin. Payez 50€.",
        "Avancez jusqu'à la case de départ. Recevez 200€.",
        "Vous etes évalué pour des travaux de voirie: Payez 80€ ",
        "Erreur de la banque en votre faveur. Recevez 200€.",
        "Vous avez gagné le deuxième prix du concours de beauté. Recevez 10€.",
        "La vente de vos actions vous rapporte 50€.",
    };
    ///////////////////////////////////////////////////////////////////////////////////////////
	// initialisation des valeurs pour chaques lignes
    int tabRecCom[16] = {100, 10, 25, 0, -100, 20, 100, -50, 100, 0, -50, 200, -80, 200, 10, 50};
    ////////////////////////////////////////////////////////////////////////////////////////////
    char tabCartChan[16][200] = { // Tableau de chaines de caractéres " cartes chance"
        "Faites des réparations payez 50€.",
        "Votre pret immoblier vous rapporte.Recevez 150€.",
        "Avancez jusqu'à la rue de la paix.",
        "Avancez jusqu'à la gare la plus proche.",
        "Allez à la gare de Motparnasse.",
        "Avancez jusqu'à la gare la plus proche.",
        "Amende pour excès de vitesse. Payez 15€.",
        "Reculez trois cases.",
        "Vous etes libéré de prison. Cette carte peut etre conservée jusqu'à ce qu'elle soit utilisée, échangée ou vendue.",
        "Avancez jusqu'à la case départ. Recevez 200€.",
        "Avancez jusqu'à l'avenue Henri-Martin. Recevez 200€.",
        "Avancez jusqu'au boulevard de la Vilette. Recevez 200€.",
        "Avancez jusqu'à la compagnie de service public la plus proche.",
        "Vous avez été élu président du conseil d'administration. Payez à chaque joueur 50€.",
        "Allez en prison. Allez tout droit en prison ne passez pas par la case de départ. Ne recevez pas 200€.",
        "Amende pour ivresse. Payez 200€.",
    };
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int tabRecChan[16] = {-50, 150, 0, 0, 0, 0, -15, 0, 0, 200, 0, 0, 0, -50, 0, -200};
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    lesCases cases[39];
    int j = 0;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Boucle d'initialisisation des cases de jeux ! 
    for (size_t i = 0; i < 40; i++)
    {
        strcpy(cases[i].nomCase, tabnom[i]);
        strcpy(cases[i].couleurDelaCase, tabCol[i]);
    }
    for (j = 0; j < 40; j++)
    { // REMPLIR LES INFORMATION RELATIVE AU CASE
        cases[j].prixDachat = tabPrix[0][j];
        cases[j].loyerSimple = tabPrix[1][j];
        cases[j].loyerAvecGroupe = tabPrix[2][j];
        cases[j].loyerAvecUneMaison = tabPrix[3][j];
        cases[j].loyerAvecDeuxMaison = tabPrix[4][j];
        cases[j].loyerAvecTroisMaison = tabPrix[5][j];
        cases[j].loyerAvecQuatreMaison = tabPrix[6][j];
        cases[j].loyerAvecHotel = tabPrix[7][j];
        cases[j].prixmaison = tabPrix[8][j];
        cases[j].prixHotel = tabPrix[9][j];
        cases[j].prixHypo = tabPrix[10][j];
        cases[j].prixLeverHypo = tabPrix[11][j];
        cases[0].typeDeCase = 0;
	/* == initialisation de chaque case par son type et sa couleur == */
        if (j == 1 || j == 3)
        { // le type cases pour les terrains est 1
            // gris 1
            cases[j].typeCouleur = 1;
            cases[j].typeDeCase = 1;
        }
        else if (j == 2 || j == 17 || j == 33)
        { // Communauté c'est 2
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 2;
        }
        else if (j == 4 || j == 38)
        { // les impots c'est 3
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 3;
        }
        else if (j == 5 || j == 15 || j == 25 || j == 35)
        { //les gares c'est 4
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 4;
        }
        else if (j == 7 || j == 36 || j == 22)
        { // carte chance type 5
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 5;
        }
        else if (j == 10)
        {
            //EN PRISON 6
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 6;
        }
        else if (j == 30)
        { // allez en prison 7
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 7;
        }
        else if (j == 20)
        { // parc gratuit 8
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 8;
        }
        else if (j == 12 || j == 28)
        { // ELEC ET LES EAUX 9
            cases[j].typeCouleur = 0;
            cases[j].typeDeCase = 9;
        }
        else if (j == 6 || j == 8 || j == 9)
        { //BLUE CIEL 2
            cases[j].typeCouleur = 2;
            cases[j].typeDeCase = 1;
        }
        else if (j == 11 || j == 13 || j == 14)
        { // VIOLET 3
            cases[j].typeCouleur = 3;
            cases[j].typeDeCase = 1;
        }
        else if (j == 16 || j == 18 || j == 19)
        { //CYAN 4
            cases[j].typeCouleur = 4;
            cases[j].typeDeCase = 1;
        }
        else if (j == 21 || j == 23 || j == 24)
        { // ROUGE 5
            cases[j].typeCouleur = 5;
            cases[j].typeDeCase = 1;
        }
        else if (j == 26 || j == 27 || j == 29)
        { //JAUNE 6
            cases[j].typeCouleur = 6;
            cases[j].typeDeCase = 1;
        }
        else if (j == 31 || j == 32 || j == 34)
        { //VERT 7
            cases[j].typeCouleur = 7;
            cases[j].typeDeCase = 1;
            cases[j].occupe = 0;
        }
        else if (j == 37 || j == 39)
        { // BLUE
            cases[j].typeCouleur = 8;
            cases[j].typeDeCase = 1;
            cases[j].occupe = 0;
        }
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    lesCases caisseComu[16];
    lesCases carteChance[16];
	/* ===== initialisisation des cartes communauté  "BOUCLE DE SAISIE" ! ====*/
    for (j = 0; j < 16; j++) // 
    {
        strcpy(caisseComu[j].nomCase, tabCartCom[j]);
        caisseComu[j].recCom = tabRecCom[j];
    }
	/* ===== initialisisation des cartes chance  "BOUCLE DE SAISIE" ! ====*/
    for (j = 0; j < 16; j++)
    {
        strcpy(carteChance[j].nomCase, tabCartChan[j]);
        carteChance[j].recChan = tabRecChan[j];
    }


 	/* ==  Declaration des variables ==  */ 

    int premiereFois = 1, x, y = 0 , i, mise, z, tirecom, tireChance, de1, de2, conteur = 0, tour1 = 0, jouez = 0, p = partie, abandonne = 0, controle = 1, jroc, u, k, nombreDeParticipants;
    Joueur joueurs[4];
    joueurs[1].symbole = ' ', joueurs[2].symbole = ' ', joueurs[3].symbole = ' ', joueurs[4].symbole = ' ';
    joueurs[1].position = 0, joueurs[2].position = 0, joueurs[3].position = 0, joueurs[4].position = 0;
    char choix[5];
    char touche[20], symbole[10];
    nombreDeParticipants = p;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* Début de la partie */ 
    if (premiereFois == 1)
    {
        for (i = 1; i <= p; i++)
        {
            printf("joueur %d donnez votre Nom : ", i);
            scanf("%s", joueurs[i].nom);
            printf("choisir un symbole : ");
            scanf("%s", symbole);
            joueurs[i].symbole = getSymbole(symbole);
            joueurs[i].argent = 1500;
            joueurs[i].position = 0;
        }
       
                do // Boucle de saisi des noms de joueurs 
                {
                  for (size_t i = 1; i <= p; i++)
                  {
                     for (j = p; j > i ; j--)
                     {
                        if (strcmp(joueurs[i].nom,joueurs[j].nom) == 0)
                        {
                            printf("JOUEUR %d Nom déja saisi !  Veuillez le changer svp :",j); 
                            scanf("%s", joueurs[j].nom);
                            
                        }
                        else
                        {
                            y = 1;
                        }
                        

                        
                     }
                     
                  }
                  

                }while (y == 0);
                y = 0 ;
                do // boucle de saisi des symboles joueurs
                {
                  for (size_t i = 1; i <= p; i++)
                  {
                     for (j = p; j > i ; j--)
                     {
                        if (joueurs[i].symbole == joueurs[j].symbole)
                        {
                            printf("JOUEUR %d Symbole déja saisi !  Veuillez le changer s'il vous plaît :",j); 
                            scanf("%s", symbole);
                            joueurs[j].symbole = getSymbole(symbole);
                            
                        }
                        else
                        {
                            y = 1;
                        }
                        

                        
                     }
                     
                  }
                  

                }while (y == 0);
               
                
     
        // Affichage des symboles sur le plateau 
        afficheTab(joueurs[1].symbole, joueurs[2].symbole, joueurs[3].symbole, joueurs[4].symbole, joueurs[1].position, joueurs[2].position, joueurs[3].position, joueurs[4].position);

        printf(" Qui d'entre vous veut être le banquier :\n");
        for (i = 1; i <= p; i++)
        {
            printf("TAPEZ %d POUR %s\n", i, joueurs[i].nom);
        }

        scanf("%s", choix);
        if (verfieChoix(choix, partie) == 1)
        {
            joueurs[1].banquier = 1;
            printf("%s Vous êtes le banquier !!\n", joueurs[1].nom);
        }
        else if (verfieChoix(choix, partie) == 2)
        {
            joueurs[2].banquier = 1;
            printf("%s Vous êtes le banquier !!\n", joueurs[2].nom);
        }
        else if (verfieChoix(choix, partie) == 3)
        {
            joueurs[3].banquier = 1;
            printf("%s Vous êtes le banquier !!\n", joueurs[3].nom);
        }
        else
        {
            joueurs[4].banquier = 1;
            printf("%s Vous êtes le banquier !!\n", joueurs[4].nom);
        }

        premiereFois = 0;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int tour = 1;
    i = 1, j = i + 1;
    while (tour <= p) // vérifier que tout les joueurs font leur tour
    {
        j = i + 1;
        printf("%s Appuyez sur 'J' pour jeter les dés !", joueurs[i].nom);
        scanf("%s", touche);
        de1 = jetteLesDee(), de2 = jetteLesDee();
        printf("Le joueur %s se déplace de la case %d vers  =========> la case  %d\n ", joueurs[i].nom, joueurs[i].position, de1 + de2);
        joueurs[i].position = (de1 + de2);
        afficheTab(joueurs[1].symbole, joueurs[2].symbole, joueurs[3].symbole, joueurs[4].symbole, joueurs[1].position, joueurs[2].position, joueurs[3].position, joueurs[4].position);
        if (cases[joueurs[i].position].occupe == 1 && (cases[joueurs[i].position].typeDeCase == 1 || cases[joueurs[i].position].typeDeCase == 4))
        {
            printf("%s LA CASE EST DEJA OCCUPÉE . LE PREMIER TOUR VOUS N'AVEZ RIEN PAYER ! ", joueurs[i].nom);
            tour++;
            i = tour;
            continue;
        }

        if ((cases[joueurs[i].position].typeDeCase == 1 || cases[joueurs[i].position].typeDeCase == 4))
        {
            afficheCarte(cases, joueurs[i].position);
            printf("%s Que Voulez-vous faire : \n TAPEZ 1 POUR ACHETER\n TAPEZ 2 POUR ENCHÈRIR :", joueurs[i].nom);
            scanf("%s", choix);
            while (1)
            {
                if (ChoixaAction(choix) == 0)
                {

                    printf("CHOIX INTROUVABLE \n");
                    scanf("%s", choix);
                }
                else
                {
                    break;
                }
            }
            if (ChoixaAction(choix) == 1)
            {
                joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixDachat;
                cases[joueurs[i].position].occupe = 1;
                joueurs[i].tabAcqui[joueurs[i].position] = 1;
                switch (cases[joueurs[i].position].typeCouleur)
                {
                case 1:
                    joueurs[i].couleurGris++;
                    break;
                case 2:
                    joueurs[i].couleurBlueciel++;
                    break;
                case 3:
                    joueurs[i].couleurViolet++;
                    break;
                case 4:
                    joueurs[i].couleurCyan++;
                    break;
                case 5:
                    joueurs[i].couleurRouge++;
                    break;
                case 6:
                    joueurs[i].couleurJaune++;
                    break;
                case 7:
                    joueurs[i].couleurVert++;
                    break;
                case 8:
                    joueurs[i].couleurBlue++;
                    break;

                default:
                    break;
                }
            }
            else
            {
                cases[joueurs[i].position].prixEnchere++;
                printf("SI LES ENCHÈRES DEPASSENT LE SOLDE DES JOUEURS. LA PROPRIÉTÉ  REVIENDRA À LA BANQUE\n LES ENCHÈRES COMMENCENT A %d\n", cases[joueurs[i].position].prixEnchere);
                while ((j % (p + 1)) != i)
                {
                    j = (j % (p + 1));
                    if (j == 0)
                    {
                        j++;
                        continue;
                    }

                    printf("%sENCHERISSEZ : ", joueurs[j].nom);
                    scanf("%d", &mise);
                    while (mise > joueurs[j].argent)
                    {
                        puts("LIQUIDE INSUFFISANT ! Re-ENCHERISSEZ :");
                        scanf("%d", &mise);
                    }
                    cases[joueurs[i].position].prixEnchere = cases[joueurs[i].position].prixEnchere + mise;
                    printf("ON EST A %d€\n", cases[joueurs[i].position].prixEnchere);
                    j++;
                }
                x = i;
                abandonne = 0;
                controle = 0;
                while (cases[joueurs[i].position].occupe == 0 && abandonne != (p - 1))
                {

                    if (joueurs[x].abandonne == 1)
                    {
                        x++;
                        continue;
                    }

                    printf("%s Que Voulez vous faire : \n TAPEZ 1 POUR ENCHÈRIR\n TAPEZ 2 POUR ABANDONNER :", joueurs[x].nom);
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE ");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 2)
                    {
                        joueurs[x].abandonne = 1;
                        abandonne++;
                    }

                    if (ChoixaAction(choix) == 1)
                    {
                        printf("%sENCHERISSEZ : ", joueurs[x].nom);
                        scanf("%d", &mise);
                        while (mise > joueurs[x].argent)
                        {
                            puts("LIQUIDE INSUFFISANT ! Re-ENCHERISSEZ :\n");
                            scanf("%d", &mise);
                        }
                        cases[joueurs[i].position].prixEnchere = cases[joueurs[i].position].prixEnchere + mise;
                        printf("ON EST A %d€\n", cases[joueurs[i].position].prixEnchere);
                    }
                    if (cases[joueurs[i].position].prixEnchere >= joueurs[x].argent)
                    {

                        controle = 1;
                        printf("LES ENCHÈRES DEPASSENT LE SOLDE DES JOUEURS\n");
                        break;
                    }

                    x = (x + 1) % (p + 1);
                    if (x == 0)
                    {
                        x++;
                    }
                }

                if (controle == 1)
                {
                    puts("LA PROPRIÉTÉ REVIENT A LA BANQUE\n");
                }
                else
                {
                    for (size_t u = 1; u <= p; u++)
                    {
                        if (joueurs[u].abandonne != 1)
                        {

                            printf("LA CARTE REVIENT A %s\n", joueurs[u].nom);
                            cases[joueurs[i].position].occupe = 1;
                            joueurs[u].argent = joueurs[u].argent - cases[joueurs[x].position].prixEnchere;
                            joueurs[u].tabAcqui[joueurs[x].position] = 1;
                            switch (cases[joueurs[x].position].typeCouleur)
                            {
                            case 1:
                                joueurs[u].couleurGris++;
                                break;
                            case 2:
                                joueurs[u].couleurBlueciel++;
                                break;
                            case 3:
                                joueurs[u].couleurViolet++;
                                break;
                            case 4:
                                joueurs[u].couleurCyan++;
                                break;
                            case 5:
                                joueurs[u].couleurRouge++;
                                break;
                            case 6:
                                joueurs[u].couleurJaune++;
                                break;
                            case 7:
                                joueurs[u].couleurVert++;
                                break;
                            case 8:
                                joueurs[u].couleurBlue++;
                                break;

                            default:
                                break;
                            }
                        }
                    }
                }
            }
        }

        if (cases[joueurs[i].position].typeDeCase == 3) 
        {
            joueurs[i].argent = joueurs[i].argent - 200;
            afficheCarte(cases, joueurs[i].position);
            printf("VOUS DEVEZ PAYER 200€ D'IMPOT VOTRE SOLDE EST DE %d€\n", joueurs[i].argent);
        }
        else if (cases[joueurs[i].position].typeDeCase == 6)
        {
            printf("EN PRISON MAIS VOUS ALLEZ RE-LANCER APRES GRATUITEMENT CETTE FOIS\n");
            joueurs[i].position = 0;
        }
        else if (cases[joueurs[i].position].typeDeCase == 9 && cases[joueurs[i].position].occupe != 1)
        {
            afficheCarte(cases, joueurs[i].position);
            printf("%s Que voulez-vous faire : \n TAPEZ 1 POUR ACHETER\n TAPEZ 2 POUR PASSER VOTRE TOUR :", joueurs[i].nom);
            scanf("%s", choix);
            while (1)
            {
                if (ChoixaAction(choix) == 0)
                {

                    printf("CHOIX INTROUVABLE \n");
                    scanf("%s", choix);
                }
                else
                {
                    break;
                }
            }
            if (ChoixaAction(choix) == 1)
            {
                cases[joueurs[i].position].occupe = 1;
                joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixDachat;
                joueurs[i].tabAcqui[joueurs[i].position] = 1;
            }
            else
            {
                puts("OK\n");
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 2)
        {
            printf("CAISSE DE COMMUNAUTE LE HASARD DECIDERA \n");
            tirecom = rand() % 16;
            printf("%s\n", caisseComu[tirecom].nomCase);
            if (tirecom != 3 && tirecom != 9)
            {
                joueurs[i].argent = joueurs[i].argent + caisseComu[tirecom].recCom;
            }
            else if (tirecom == 3)
            {
                printf("PAS DE PRISON AU PREMIER TOUR :D\n");
            }
            else
            {
                printf("GARDEZ CETTE CARTE POUR VOUS \n");
                joueurs[i].cartePrison = 1;
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 5)
        {
            printf("CARTE CHANCE LE HASARD DECIDERA \n");
            tireChance = rand() % 16;//  RANDOM TIRAGE DES CARTES CHANCES
            if (tireChance == 0 || tireChance == 1 || tireChance == 6 || tireChance == 15)
            {
                printf("%s\n", carteChance[tireChance].nomCase);
                joueurs[i].argent = joueurs[i].argent + carteChance[tireChance].recChan;
            }
            else if (tireChance == 8)
            {
                printf("%s\n", carteChance[tireChance].nomCase);
                printf("GARDEZ CETTE CARTE EN VOUS \n");
                joueurs[i].cartePrison = 1;
            }
            else
            {
                printf("PAS DE DEPLACEMENT AVANT LE DEUXIEME TOUR\n");
            }
        }

        tour++;
        i = tour;
    }
    for (size_t k = 1; k <= p; k++)
    {
        joueurs[k].abandonne = 0;
    }
    printf("LE DEUXIEME TOUR COMMENCE\n");
    i = 1;
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    while (jouez == 0)
    {   
        if (joueurs[i].participe == 1)
        {
            i++;
            i = i % (p + 1);
            if (i == 0)
            {
                i++;
            }
            continue ;
        }// Prison 
        if (joueurs[i].enPrison == 1)
        {
            printf("%s VOUS ETES PRISONNIER\n", joueurs[i].nom);
            if (joueurs[i].cartePrison == 1)
            {
                printf("VOUS POSSEDEZ UNE CARTE DONC SORTEZ\n");
                joueurs[i].enPrison = 0;
            }
            else
            {
                puts("PAYEZ 50 €\n");
                joueurs[i].argent = joueurs[i].argent - 50;
                joueurs[i].enPrison = 0;
            }
        }
        printf("%s Appuyez sur 'J' pour jeter les dès !", joueurs[i].nom);
        scanf("%s", touche);
        de1 = jetteLesDee(), de2 = jetteLesDee();

        
        printf("Le joueur %s se deplace de la case %d vers =========> la case %d\n ", joueurs[i].nom, joueurs[i].position, ((joueurs[i].position + (de1 + de2)) % 40));
        joueurs[i].position = joueurs[i].position + (de1 + de2);
        if (joueurs[i].position >= 40)
        {
            joueurs[i].argent = joueurs[i].argent + 200;
            printf("BARVO VOUS ETES PASSÉ PAR LA CASE DE DEPART %s VOTRE SOLDE EST DE %d\n", joueurs[i].nom, joueurs[i].argent);
            joueurs[i].position = joueurs[i].position % 40;
        }
        afficheTab(joueurs[1].symbole, joueurs[2].symbole, joueurs[3].symbole, joueurs[4].symbole, joueurs[1].position, joueurs[2].position, joueurs[3].position, joueurs[4].position);
        if (de1 == de2)
        {
            puts("VOUS AVEZ FAIT UN DOUBLÉ RE-LANCEZ LES DÈS, APRES VOTRE ACTION\n");
        }
        afficheCarte(cases, joueurs[i].position);
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        if (cases[joueurs[i].position].typeDeCase == 1 && cases[joueurs[i].position].occupe == 0)
        {
            j = i + 1;
            printf("%s Que Voulez faire : \n TAPEZ 1 POUR ACHETER\n TAPEZ 2 POUR UNE ENCHÈRIR :", joueurs[i].nom);
            scanf("%s", choix);
            while (1)
            {
                if (ChoixaAction(choix) == 0)
                {

                    printf("CHOIX INTROUVABLE \n");
                    scanf("%s", choix);
                }
                else
                {
                    break;
                }
            }
            if (ChoixaAction(choix) == 1)
            {
                joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixDachat;
                cases[joueurs[i].position].occupe = 1;
                joueurs[i].tabAcqui[joueurs[i].position] = 1;
                switch (cases[joueurs[i].position].typeCouleur)
                {
                case 1:
                    joueurs[i].couleurGris++;
                    break;
                case 2:
                    joueurs[i].couleurBlueciel++;
                    break;
                case 3:
                    joueurs[i].couleurViolet++;
                    break;
                case 4:
                    joueurs[i].couleurCyan++;
                    break;
                case 5:
                    joueurs[i].couleurRouge++;
                    break;
                case 6:
                    joueurs[i].couleurJaune++;
                    break;
                case 7:
                    joueurs[i].couleurVert++;
                    break;
                case 8:
                    joueurs[i].couleurBlue++;
                    break;

                default:
                    break;
                }
            }
            else
            {
                cases[joueurs[i].position].prixEnchere++;
                printf("SI LES ENCHÈRES DEPASSENT LE SOLDE DES JOUEURS, LA PROPRIÉTÉ REVIENDRA A LA BANQUE\n LES ENCHÈRES COMMENCENT A %d\n", cases[joueurs[i].position].prixEnchere);
                while ((j % (p + 1)) != i)
                {
                    j = (j % (p + 1));
                    if (j == 0)
                    {
                        j++;
                        continue;
                    }

                    printf("%sENCHERISSEZ : ", joueurs[j].nom);
                    scanf("%d", &mise);
                    while (mise > joueurs[j].argent)
                    {
                        puts("LIQUIDE INSUFFISANT ! Re-ENCHERISSEZ :");
                        scanf("%d", &mise);
                    }
                    cases[joueurs[i].position].prixEnchere = cases[joueurs[i].position].prixEnchere + mise;
                    printf("ON EST A %d€\n", cases[joueurs[i].position].prixEnchere);
                    j++;
                }
                x = i;
                abandonne = 0;
                controle = 1;
                while (cases[joueurs[i].position].occupe == 0 && abandonne != (p - 1))
                {
                    if (joueurs[x].abandonne == 1)
                    {
                        x++;
                        continue;
                    }

                    printf("%s Que Voulez faire : \n TAPEZ 1 POUR ENCHÈRIR\n TAPEZ 2 POUR ABANDONNER :", joueurs[x].nom);
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE ");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 2)
                    {
                        joueurs[x].abandonne = 1;
                        abandonne++;
                    }

                    if (ChoixaAction(choix) == 1)
                    {
                        printf("%sENCHERISSEZ : ", joueurs[x].nom);
                        scanf("%d", &mise);
                        while (mise > joueurs[x].argent)
                        {
                            puts("LIQUIDE INSUFFISANT ! Re-ENCHERISSEZ :\n");
                            scanf("%d", &mise);
                        }
                        cases[joueurs[i].position].prixEnchere = cases[joueurs[i].position].prixEnchere + mise;
                        printf("ON EST A %d€\n", cases[joueurs[i].position].prixEnchere);
                    }
                    for (u = 1; u <= p; u++)
                    {
                        if (cases[joueurs[i].position].prixEnchere >= joueurs[u].argent && joueurs[u].abandonne != 1)
                        {

                            controle++;
                            printf("%s LES ENCHÈRES DEPASSENT LE SOLDE DU JOUEUR\n", joueurs[u].nom);
                            break;
                        }
                    }

                    x = (x + 1) % (p + 1);
                    if (x == 0)
                    {
                        x++;
                        continue;
                    }
                }

                if (controle == p)
                {
                    puts("LA PROPRIÉTÉ REVIENT À LA BANQUE\n");
                }
                else
                {
                    for (u = 1; u <= p; u++)
                    {
                        if (joueurs[u].abandonne != 1)
                        {

                            printf("LA CARTE REVIENT À %s\n", joueurs[u].nom);
                            cases[joueurs[x].position].occupe = 1;
                            joueurs[u].argent = joueurs[u].argent - cases[joueurs[x].position].prixEnchere;
                            joueurs[u].tabAcqui[joueurs[x].position] = 1;
                            switch (cases[joueurs[x].position].typeCouleur)
                            {
                            case 1:
                                joueurs[u].couleurGris++;
                                break;
                            case 2:
                                joueurs[u].couleurBlueciel++;
                                break;
                            case 3:
                                joueurs[u].couleurViolet++;
                                break;
                            case 4:
                                joueurs[u].couleurCyan++;
                                break;
                            case 5:
                                joueurs[u].couleurRouge++;
                                break;
                            case 6:
                                joueurs[u].couleurJaune++;
                                break;
                            case 7:
                                joueurs[u].couleurVert++;
                                break;
                            case 8:
                                joueurs[u].couleurBlue++;
                                break;

                            default:
                                break;
                            }
                        }
                    }
                }
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 1 && cases[joueurs[i].position].occupe == 1)
        {

            if (joueurs[i].tabAcqui[joueurs[i].position] == 1 && cases[joueurs[i].position].typeDeCase == 1)
            { ////////////////////////////////////////////////////////////////////////////////////////////////
		// ACHAT DE MAISON 
                if (joueurs[i].couleurGris == 2)
                {
                    printf("VOULEZ VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI. TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                }
                else if (joueurs[i].couleurBlueciel == 3)
                {
                    printf("VOULEZ VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI.  TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                }
                else if (joueurs[i].couleurViolet == 3)
                {
                    printf("VOULEZ-VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI. TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                }
                else if (joueurs[i].couleurCyan == 3)
                {
                    printf("VOULEZ VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI. TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                }
                else if (joueurs[i].couleurRouge == 3)
                {
                    printf("VOULEZ-VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI. TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                }
                else if (joueurs[i].couleurJaune == 3)
                {
                    printf("VOULEZ-VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                }
                else if (joueurs[i].couleurVert == 3)
                {
                    printf("VOULEZ-VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI. TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                }
                else if (joueurs[i].couleurBlue == 2)
                {
                    printf("VOULEZ-VOUS ACHETER UNE MAISON : TAPEZ 1 SI OUI TAPEZ 2 SI NON : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixmaison;
                    }
                    else
                    {
                        puts("OK");
                    }
                }
                else
                {
                    puts("VOUS NE POUVEZ RIEN FAIRE\n");
                }

                if (cases[joueurs[i].position].maisonConst == 4)
                {
                    printf("VOULEZ-VOUS ACHETER UN HOTEL : TAPEZ 1 SI OUI. TAPEZ 2 SI NON\n : ");
                    scanf("%s", choix);
                    while (1)
                    {
                        if (ChoixaAction(choix) == 0)
                        {

                            printf("CHOIX INTROUVABLE \n");
                            scanf("%s", choix);
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (ChoixaAction(choix) == 1)
                    {
                        cases[joueurs[i].position].maisonConst = cases[joueurs[i].position].maisonConst + 1;
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixHotel;
                    }
                    else
                    {
                        puts("OK");
                    }
                } // VERIFICATION PAIEMENT LOYER 
            }
            else if (joueurs[i].tabAcqui[joueurs[i].position] == 0 && cases[joueurs[i].position].typeDeCase == 1)
            {
                jroc = quiOccupe(joueurs, joueurs[i].position);// ON FAIT APPEL A LA FONCTION QUIOCCUPE QUI PRENDS EN ARGUEMENT LE JOEUR ET SA POSITION
                printf("LA CASE EST  OCCUPÉE PAR LE JOUEUR  %s , %s PAYEZ LE MONTANT DE LOYER INDIQUÉ\n", joueurs[jroc].nom, joueurs[i].nom);
                if (joueurs[jroc].couleurGris == 2)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d\n", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else if (joueurs[jroc].couleurBlueciel == 3)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER  %d\n7", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else if (joueurs[jroc].couleurViolet == 3)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d\n", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER  %d\n7\n", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else if (joueurs[jroc].couleurCyan == 3)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d\n", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER  %d\n7\n", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else if (joueurs[jroc].couleurRouge == 3)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d\n", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER  %d\n7", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else if (joueurs[jroc].couleurJaune == 3)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER  %d\n7", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else if (joueurs[jroc].couleurVert == 3)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER  %d\n7", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER  %d\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else if (joueurs[jroc].couleurBlue == 2)
                {
                    switch (cases[joueurs[i].position].maisonConst)
                    {
                    case 0:
                        printf("PAYER UN LOYER AVEC GROUPE %d€", cases[joueurs[i].position].loyerAvecGroupe);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecGroupe;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecGroupe;
                        break;
                    case 1:
                        printf("PAYER UN LOYER DE %d€\n", cases[joueurs[i].position].loyerAvecUneMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecUneMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecUneMaison;
                        break;
                    case 2:
                        printf("PAYER UN LOYER DE %d€\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                        break;
                    case 3:
                        printf("PAYER UN LOYER DE %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                        break;
                    case 4:
                        printf("PAYER UN LOYER DE %d€\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                        break;
                    case 5:
                        printf("PAYER UN LOYER DE %d€\n", cases[joueurs[i].position].loyerAvecHotel);
                        joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecHotel;
                        joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecHotel;
                        break;

                    default:
                        break;
                    }
                }
                else 
                {
                    printf("PAYER UN LOYER SIMPLE %d€ A %s\n", cases[joueurs[i].position].loyerSimple, joueurs[jroc].nom);
                    joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerSimple;
                    joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerSimple;
                }
            }
        }

        if (cases[joueurs[i].position].typeDeCase == 4)
        {
            if (cases[joueurs[i].position].occupe == 0)
            {

                j = i + 1;
                printf("%s Que Voulez vous faire : \n TAPEZ 1 POUR ACHETER\n TAPEZ 2 POUR UNE ENCHÈRIR :", joueurs[i].nom);
                scanf("%s", choix);
                while (1)
                {
                    if (ChoixaAction(choix) == 0)
                    {

                        printf("CHOIX INTROUVABLE \n");
                        scanf("%s", choix);
                    }
                    else
                    {
                        break;
                    }
                }
                if (ChoixaAction(choix) == 1)
                {
                    joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixDachat;
                    cases[joueurs[i].position].occupe = 1;
                    joueurs[i].tabAcqui[joueurs[i].position] = 1;
                }
                else
                {
                    cases[joueurs[i].position].prixEnchere++;
                    printf("SI LES ENCHÈRES DEPASSENT LE SOLDE DES JOUEURS. LA PROPRIÉTÉ REVIENDRA À LA BANQUE\n LES ENCHER COMMANCE A %d\n", cases[joueurs[i].position].prixEnchere);
                    while ((j % (p + 1)) != i)// tant que le nb est différent du nombre de joueur de la partie, on continue 
                    {
                        j = (j % (p + 1));
                        if (j == 0)
                        {
                            j++;
                            continue;
                        }

                        printf("%sENCHERISSEZ : ", joueurs[j].nom);
                        scanf("%d", &mise);
                        while (mise > joueurs[j].argent)
                        {
                            puts("LIQUIDE INSUFFISANT ! Re-ENCHERISSEZ :");
                            scanf("%d", &mise);
                        }
                        cases[joueurs[i].position].prixEnchere = cases[joueurs[i].position].prixEnchere + mise;
                        printf("ON EST A %d€\n", cases[joueurs[i].position].prixEnchere);
                        j++;
                    }
                    x = i;
                    abandonne = 0;
                    controle = 0;
                    while (cases[joueurs[i].position].occupe == 0 && abandonne != (p - 1)) 
                    {
                        if (joueurs[x].abandonne == 1)
                        {
                            x++;
                            continue;
                        }

                        printf("%s Que Voulez vous faire : \n TAPEZ 1 POUR ENCHÈRIR\n TAPEZ 2 POUR ABANDONNER :", joueurs[x].nom);
                        scanf("%s", choix);
                        while (1)
                        {
                            if (ChoixaAction(choix) == 0)
                            {

                                printf("CHOIX INTROUVABLE ");
                                scanf("%s", choix);
                            }
                            else
                            {
                                break;
                            }
                        }
                        if (ChoixaAction(choix) == 2)
                        {
                            joueurs[x].abandonne = 1;
                            abandonne++;
                        }

                        if (ChoixaAction(choix) == 1)
                        {
                            printf("%sENCHERISSEZ 2 : ", joueurs[x].nom);
                            scanf("%d", &mise);
                            while (mise > joueurs[x].argent) // VERIFIER SI LE JOUEUR A UN SOLDE SUFFISANT 
                            {
                                puts("LIQUIDE INSUFFISANT ! Re-ENCHERISSEZ :\n");
                                scanf("%d", &mise);
                            }
                            cases[joueurs[i].position].prixEnchere = cases[joueurs[i].position].prixEnchere + mise;
                            printf("ON EST A %d€\n", cases[joueurs[i].position].prixEnchere);
                        }
                        if (cases[joueurs[i].position].prixEnchere >= joueurs[x].argent)
                        {

                            controle++;
                        }

                        x = (x + 1) % (p + 1);
                        if (x == 0)
                        {
                            x++;
                            continue;
                        }
                    }

                    if (controle == p)
                    {
                        puts("LA PROPRIÉTÉ REVIENT À LA BANQUE\n");
                    }
                    else
                    {
                        for (u = 1; u <= p; u++)
                        {
                            if (joueurs[u].abandonne != 1)
                            {

                                printf("LA CARTE REVIENT A %s\n", joueurs[u].nom);
                                cases[joueurs[i].position].occupe = 1;
                                joueurs[u].argent = joueurs[u].argent - cases[joueurs[x].position].prixEnchere;
                                joueurs[u].tabAcqui[joueurs[x].position] = 1;
                            }
                            else
                            {
                                puts("LA PROPRIÉTÉ REVIENT A LA BANQUE\n");
                            }
                        }
                    }
                }
            }
            else if (cases[joueurs[i].position].occupe == 1 && joueurs[i].tabAcqui[joueurs[i].position] != 1)
            {
                jroc = quiOccupe(joueurs, joueurs[i].position);

                printf("LA GARE EST OCUPPÉE PAR %s, %s VOUS DEVEZ PAYER LE MONTANT DU LOYER INDIQUÉ\n", joueurs[jroc].nom, joueurs[i].nom);
				
				conteur = 0; 
                for (size_t w = 5; w < 36; w = w + 10)
                {
                    if (joueurs[jroc].tabAcqui[w] == 1)
                    {
                        conteur++;
                    }
                }
                switch (conteur)
                {
                case 1:
                    printf("PAYER UN LOYER SIMPLE %d€\n", cases[joueurs[i].position].loyerSimple);
                    joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerSimple;
                    joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerSimple;
                    break;
                case 2:
                    printf("PAYER UN LOYER DE %d €\n", cases[joueurs[i].position].loyerAvecDeuxMaison);
                    joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecDeuxMaison;
                    joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecDeuxMaison;
                    break;
                case 3:
                    printf("PAYER UN LOYER DE %d\n", cases[joueurs[i].position].loyerAvecTroisMaison);
                    joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecTroisMaison;
                    joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecTroisMaison;
                    break;
                case 4:
                    printf("PAYER UN LOYER DE %d €\n", cases[joueurs[i].position].loyerAvecQuatreMaison);
                    joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].loyerAvecQuatreMaison;
                    joueurs[jroc].argent = joueurs[jroc].argent + cases[joueurs[i].position].loyerAvecQuatreMaison;
                    break;
                default:
                    break;
                }
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 3)
        {
            joueurs[i].argent = joueurs[i].argent - 200;
            printf("VOUS DEVEZ PAYER 200€ D'IMPOT.  VOTRE SOLDE ACTUEL EST DE %d€\n", joueurs[i].argent);
        }
        else if (cases[joueurs[i].position].typeDeCase == 6 || cases[joueurs[i].position].typeDeCase == 7)
        {
            if (joueurs[i].position == 30)
            {
                joueurs[i].position = 10;
                puts("ALLEZ EN PRISON\n");
                joueurs[i].enPrison = 1;
            }
            else // Si le joeur est en possesion de la carte sortie de prison
            {
                if (joueurs[i].cartePrison == 1)
                {
                    puts("VOUS SORTEZ SANS RIEN PAYEZ :\n");
                }
                else
                {
                    puts("PAYEZ 50€ QUAND VOTRE TOUR ARRIVE POUR SORTIR \n");
                    joueurs[i].enPrison = 1;
                }
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 9)
        {
            if (cases[joueurs[i].position].occupe != 1)
            {
                printf("%s Que Voulez faire : \n TAPEZ 1 POUR ACHETER\n TAPEZ 2 POUR PASSER VOTRE TOUR :", joueurs[i].nom);
                scanf("%s", choix);
                while (1)
                {
                    if (ChoixaAction(choix) == 0)
                    {

                        printf("CHOIX INTROUVABLE \n");
                        scanf("%s", choix);
                    }
                    else
                    {
                        break;
                    }
                }
                if (ChoixaAction(choix) == 1)
                {
                    cases[joueurs[i].position].occupe = 1;
                    joueurs[i].argent = joueurs[i].argent - cases[joueurs[i].position].prixDachat;
                    joueurs[i].tabAcqui[joueurs[i].position] = 1;
                }
                else
                {
                    puts("Ok\n");
                }
            }
            else
            {
                jroc = quiOccupe(joueurs, joueurs[i].position);
                if (joueurs[jroc].tabAcqui[12] + joueurs[jroc].tabAcqui[27] == 2)
                {

                    joueurs[i].argent = joueurs[i].argent - (de1 + de2) * 10;
                    joueurs[jroc].argent = joueurs[jroc].argent + (de1 + de2) * 10;
                    printf("%s VOUS  POSSEDÉDEZ LES DEUX SERVICE PUBLIQUE %s VOUS DEVEZ PAYER 10* LE RESULTAT DU LANCEMENT DES DÈS  %d\n", joueurs[jroc].nom, joueurs[i].nom, (de1 + de2) * 10);
                }
                else
                {
                    joueurs[i].argent = joueurs[i].argent - (de1 + de2) * 4;
                    joueurs[jroc].argent = joueurs[jroc].argent + (de1 + de2) * 4;
                    printf("%s PAYEZ %d \n", joueurs[i].nom, (de1 + de2) * 4);
                }
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 2)
        {
            printf("CAISSE DE COMMUNAUTE.  LE HASARD DECIDERA \n");
            tirecom = rand() % 16;
            printf("%s\n", caisseComu[tirecom].nomCase);
            if (tirecom != 3 && tirecom != 9)
            {
                joueurs[i].argent = joueurs[i].argent + caisseComu[tirecom].recCom;
            }
            else if (tirecom == 3)
            {
                joueurs[i].position = 10;
                joueurs[i].enPrison = 1;
            }
            else if (tirecom == 9)
            {
                printf("GARDEZ CETTE CARTE EN VOUS \n");
                joueurs[i].cartePrison = 1;
            }
            else
            {
                joueurs[i].position = 0;
                joueurs[i].argent = joueurs[i].argent + 200;
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 5)
        {
            printf("CARTE CHANCE LE HASARD DECIDERAS \n");
            tireChance = rand() % 16;
            printf("%s\n", carteChance[tireChance].nomCase);
            if (tireChance == 0 || tireChance == 1 || tireChance == 6 || tireChance == 15)
            {

                joueurs[i].argent = joueurs[i].argent + carteChance[tireChance].recChan;
            }
            else if (tireChance == 8)
            {
                printf("GARDEZ CETTE CARTE EN VOUS \n");
                joueurs[i].cartePrison = 1;
            }
            else if (tireChance == 14)
            {
                joueurs[i].position = 10;
                joueurs[i].enPrison = 1;
            }
            else if (tireChance == 2)
            {
                joueurs[i].position = 39;
            }
            else if (tireChance == 7)
            {
                joueurs[i].position = joueurs[i].position - 3;
            }
            else if (tireChance == 3 || tireChance == 5 || tireChance == 4)
            {
                if (joueurs[i].position > 35 && joueurs[i].position < 5)
                {
                    joueurs[i].position = 5;
                }
                else if (joueurs[i].position > 5 && joueurs[i].position < 15)
                {
                    joueurs[i].position = 15;
                }
                else if (joueurs[i].position > 15 && joueurs[i].position < 25)
                {
                    joueurs[i].position = 25;
                }
                else if (joueurs[i].position > 25 && joueurs[i].position < 35)
                {
                    joueurs[i].position = 35;
                }
            }
            else if (tireChance == 9)
            {
                joueurs[i].position = 0;
                joueurs[i].argent = joueurs[i].argent + 200;
            }
            else if (tireChance == 10)
            {
                joueurs[i].argent = joueurs[i].argent + 200;
                joueurs[i].position = 24;
            }
            else if (tireChance == 11)
            {
                joueurs[i].argent = joueurs[i].argent + 200;
            }
            else if (tireChance == 13)
            {
                joueurs[i].argent = joueurs[i].argent - 50;
                joueurs[j].argent = joueurs[j].argent + 50;
            }
            else if (tireChance == 12)
            {
                if (joueurs[i].position < 12 && joueurs[i].position > 28)
                {
                    joueurs[i].position = 12;
                }
                else
                {
                    joueurs[i].position = 28;
                }
            }
        }
        else if (cases[joueurs[i].position].typeDeCase == 8)
        {
            puts("PARC GRATUIT.  REPOSEZ VOUS :D");
        }
        
	// les doublés 
        if (de1 == de2)
        {
            if (tour1 == 0)
            {
                tour1 = 1;
                continue;
            }
            else
            {
                printf("VOUS AVEZ FAIT 3 DOUBLÉ CONSÉCUTIF. VOUS ALLEZ EN PRISON \n");
                joueurs[i].position = 10;
                joueurs[i].enPrison = 1;
            }
        }

        for (size_t u = 1; u <= p; u++)
        { /// HYPOTHEQUE 
            if (joueurs[u].argent <= 0)
            {
                printf("%s VOUS FAITES FAILLITE. HYPOTEQUEZ LES TERRAINS QUE VOUS AVEZ !\n", joueurs[u].nom);
                for (size_t k = 0; k < 40; k++)
                {
                    if (joueurs[u].tabAcqui[k] == 1)
                    {
                        printf("Que Voulez faire : \n TAPEZ 1 POUR HYPOTEQUER\n TAPEZ 2 POUR PASSER :");
                        scanf("%s", choix);
                        while (1)
                        {
                            if (ChoixaAction(choix) == 0)
                            {

                                printf("CHOIX INTROUVABLE \n");
                                scanf("%s", choix);
                            }
                            else
                            {
                                break;
                            }
                        }

                        if (ChoixaAction(choix) == 1)
                        {
                            afficheCarte(cases, k);
                            joueurs[u].argent = joueurs[i].argent + cases[k].prixHypo;
                            cases[k].occupe = 0;
                            printf("%s VOTRE SOLDE EST DE %d\n", joueurs[u].nom, joueurs[u].argent);
                            joueurs[u].tabAcqui[k] = 0;
                        }
                    }
                }
            }
        }

        for (size_t k = 1; k <= p; k++) // BOUCLE AFFICHAGE DU SOLDE DES JOUEURS 
        {
            puts("-----------------------------------");
            printf("|| %s VOTRE SOLDE EST DE %d€ ||\n", joueurs[k].nom, joueurs[k].argent);
        }
        puts("-------------------------------------------");

		for (size_t u = 1; u <=p; u++)
        {   
            printf("%s POSSEDE ||",joueurs[u].nom);
            for (size_t k = 0; k < 40 ; k++)
            {   

                if (joueurs[u].tabAcqui[k] == 1)
                {
                    printf(" %s ||",cases[k].nomCase);
                }
                
            }   
          
            printf("\n");
            puts("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        
        printf("\n");
        for (size_t k = 1; k <= p; k++)
        {
            joueurs[k].abandonne = 0;
        }

        i++;
        i = i % (p + 1);
        if (i == 0)
        {
            i++;
        }

        tour1 = 0;
        if (joueurs[i].argent <= 0)
        {
			joueurs[i].participe = 1;
            nombreDeParticipants--;
        }
        if (nombreDeParticipants <= 1)
        {
            for (size_t u = 1; u <= p; u++)
            {
                if (joueurs[u].argent > 0)
                {
                    printf("%s VOUS ETES LE GAGNANT ! \n",joueurs[u].nom)
; 
                    jouez = 1 ;
                }
            }
        }
    }
}
