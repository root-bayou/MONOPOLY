#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FonctionPrincipales.h"
#include <ctype.h>
#include "lesStructures.h"
#include <time.h>

#define H 25 // pour le tableau
#define W 230 

void afficheTab(char a, char b, char c, char d, int position1, int position2, int position3, int position4)
{ 

    int i;

    char tab[H][W] = {
        // l'idée est assez simple chaque ligne comporte les cases du jeux d une façons adéquate ! les colonnes ne nous intéresse pas on formate le texte manuellement
        "+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+",
        "PARC GRATUIT         || MATIGNON || CARTE CHANCE || MALESHERBES || HENRI-MARTIN || GARE DU NORD || SAINT-HONORÉ || LA BOURSE || CIE DES EAUX || LA FAYETTE || ALLEZ EN PRISON      ",
        "                     ||          ||              ||             ||              ||              ||              ||           ||              ||            ||                      ",
        "+--------------------||----------||--------------||-------------||--------------||--------------||--------------||-----------||--------------||------------||---------------------+",
        "PIGALLE              ||                                                                                                                                    || BRETEUIL             ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "SAINT-MICHEL         ||                                                                                                                                    || AVENUE FOCH          ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "COMMUNAUTÉ           ||                                                                                                                                    || COMMUNAUTÉ           ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "AVENUE MOZART        ||                                                                                                                                    || CAPUCINES            ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "GARE DE LYON         ||                    M  O  N O //////////////////////////////////////////////////////////////////////////// POLY                     || SAINT-LAZARE         ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "RUE DE PARADIS       ||                                                                                                                                    || CARTE CHANCE         ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "AVENUE NEUILLY       ||                                                                                                                                    || CHAM-ÉLYSÉES         ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "CIE ÉLECTRICITÉ      ||                                                                                                                                    || TAXE DE LUXE         ",
        "+--------------------||                                                                                                                                    ||---------------------+",
        "LA VILLETTE          ||                                                                                                                                    || LA PAIX              ",
        "+--------------------||------------------------------------------------------------------------------------------------------------------------------------||---------------------+",
        "SIMPLE VISITE        || RÉPUBLIQUES || COURCELLES || CARTE CHANCE || VAUGIRARD || MONTPARNASSE || IMPÔTS || LECOURBE || CAISSE DE COMMUNAUTÉ || BELLEVILLE || <======== CASE DÉPART",
        "                     ||             ||            ||              ||           ||              ||        ||          ||                      ||            ||                      ",
        "+--------------------||-------------||------------||--------------||-----------||--------------||--------||----------||----------------------||------------||---------------------+",
    };
    ////////////////////////////////////////////////////////////////////////////////////////
    if (position1 >= 0 && position1 <= 10)
    {
        if (position1 == 0)
        {
            tab[23][178] = a;
        }
        else if (position1 == 1)
        {
            tab[23][153] = a;
        }
        else if (position1 == 2)
        {
            tab[23][139] = a;
        }
        else if (position1 == 3)
        {
            tab[23][115] = a;
        }
        else if (position1 == 4)
        {
            tab[23][103] = a;
        }
        else if (position1 == 5)
        {
            tab[23][93] = a;
        }
        else if (position1 == 6)
        {
            tab[23][77] = a;
        }
        else if (position1 == 7)
        {
            tab[23][64] = a;
        }
        else if (position1 == 8)
        {
            tab[23][48] = a;
        }
        else if (position1 == 9)
        {
            tab[23][34] = a;
        }
        else if (position1 == 10)
        {
            tab[23][12] = a;
        }
    }
    else if (position1 >= 20 && position1 <= 30)
    {
        if (position1 == 20)
        {
            tab[2][4] = a;
        }
        else if (position1 == 21)
        {
            tab[2][25] = a;
        }
        else if (position1 == 22)
        {
            tab[2][37] = a;
        }
        else if (position1 == 23)
        {
            tab[2][54] = a;
        }
        else if (position1 == 24)
        {
            tab[2][70] = a;
        }
        else if (position1 == 25)
        {
            tab[2][87] = a;
        }
        else if (position1 == 26)
        {
            tab[2][102] = a;
        }
        else if (position1 == 27)
        {
            tab[2][118] = a;
        }
        else if (position1 == 28)
        {
            tab[2][133] = a;
        }
        else if (position1 == 29)
        {
            tab[2][146] = a;
        }
        else if (position1 == 30)
        {
            tab[2][162] = a;
        }
    }

    else if (position1 == 11 || position1 == 39)
    {
        if (position1 == 11)
        {
            tab[20][16] = a;
        }
        else if (position1 == 39)
        {
            tab[20][172] = a;
        }
    }
    else if (position1 == 12 || position1 == 38)
    {
        if (position1 == 12)
        {
            tab[18][16] = a;
        }
        else if (position1 == 38)
        {
            tab[18][172] = a;
        }
    }
    else if (position1 == 13 || position1 == 37)
    {
        if (position1 == 13)
        {
            tab[16][16] = a;
        }
        else if (position1 == 37)
        {
            tab[16][172] = a;
        }
    }
    else if (position1 == 14 || position1 == 36)
    {
        if (position1 == 14)
        {
            tab[14][16] = a;
        }
        else if (position1 == 36)
        {
            tab[14][172] = a;
        }
    }
    else if (position1 == 15 || position1 == 35)
    {
        if (position1 == 15)
        {
            tab[12][16] = a;
        }
        else if (position1 == 35)
        {
            tab[12][172] = a;
        }
    }
    else if (position1 == 16 || position1 == 34)
    {
        if (position1 == 16)
        {
            tab[10][16] = a;
        }
        else if (position1 == 34)
        {
            tab[10][172] = a;
        }
    }
    else if (position1 == 17 || position1 == 33)
    {
        if (position1 == 17)
        {
            tab[8][16] = a;
        }
        else if (position1 == 33)
        {
            tab[8][172] = a;
        }
    }
    else if (position1 == 18 || position1 == 32)
    {
        if (position1 == 18)
        {
            tab[6][16] = a;
        }
        else if (position1 == 32)
        {
            tab[6][172] = a;
        }
    }
    else if (position1 == 19 || position1 == 31)
    {
        if (position1 == 19)
        {
            tab[4][16] = a;
        }
        else if (position1 == 31)
        {
            tab[4][172] = a;
        }
    }
    ///////////////////////////////////////////////////////////
    if (position2 >= 0 && position2 <= 10)
    {
        if (position2 == 0)
        {
            tab[23][177] = b;
        }
        else if (position2 == 1)
        {
            tab[23][152] = b;
        }
        else if (position2 == 2)
        {
            tab[23][138] = b;
        }
        else if (position2 == 3)
        {
            tab[23][114] = b;
        }
        else if (position2 == 4)
        {
            tab[23][102] = b;
        }
        else if (position2 == 5)
        {
            tab[23][92] = b;
        }
        else if (position2 == 6)
        {
            tab[23][76] = b;
        }
        else if (position2 == 7)
        {
            tab[23][63] = b;
        }
        else if (position2 == 8)
        {
            tab[23][47] = b;
        }
        else if (position2 == 9)
        {
            tab[23][33] = b;
        }
        else if (position2 == 10)
        {
            tab[23][11] = b;
        }
    }
    else if (position2 >= 20 && position2 <= 30)
    {
        if (position2 == 20)
        {
            tab[2][5] = b;
        }
        else if (position2 == 21)
        {
            tab[2][26] = b;
        }
        else if (position2 == 22)
        {
            tab[2][38] = b;
        }
        else if (position2 == 23)
        {
            tab[2][53] = b;
        }
        else if (position2 == 24)
        {
            tab[2][71] = b;
        }
        else if (position2 == 25)
        {
            tab[2][88] = b;
        }
        else if (position2 == 26)
        {
            tab[2][103] = b;
        }
        else if (position2 == 27)
        {
            tab[2][119] = b;
        }
        else if (position2 == 28)
        {
            tab[2][134] = b;
        }
        else if (position2 == 29)
        {
            tab[2][147] = b;
        }
        else if (position1 == 30)
        {
            tab[2][163] = b;
        }
    }
    else if (position2 == 11 || position2 == 39)
    {
        if (position2 == 11)
        {
            tab[20][17] = b;
        }
        else if (position2 == 39)
        {
            tab[20][173] = b;
        }
    }
    else if (position2 == 12 || position2 == 38)
    {
        if (position2 == 12)
        {
            tab[18][17] = b;
        }
        else if (position2 == 38)
        {
            tab[18][173] = b;
        }
    }
    else if (position2 == 13 || position2 == 37)
    {
        if (position2 == 13)
        {
            tab[16][17] = b;
        }
        else if (position2 == 37)
        {
            tab[16][173] = b;
        }
    }
    else if (position2 == 14 || position2 == 36)
    {
        if (position2 == 14)
        {
            tab[14][17] = b;
        }
        else if (position2 == 36)
        {
            tab[14][173] = b;
        }
    }
    else if (position2 == 15 || position2 == 35)
    {
        if (position2 == 15)
        {
            tab[12][17] = b;
        }
        else if (position2 == 35)
        {
            tab[12][173] = b;
        }
    }
    else if (position2 == 16 || position2 == 34)
    {
        if (position2 == 16)
        {
            tab[10][17] = b;
        }
        else if (position2 == 34)
        {
            tab[10][173] = b;
        }
    }
    else if (position2 == 17 || position2 == 33)
    {
        if (position2 == 17)
        {
            tab[8][17] = b;
        }
        else if (position2 == 33)
        {
            tab[8][173] = b;
        }
    }
    else if (position2 == 18 || position2 == 32)
    {
        if (position2 == 18)
        {
            tab[6][17] = b;
        }
        else if (position2 == 32)
        {
            tab[6][173] = b;
        }
    }
    else if (position2 == 19 || position2 == 31)
    {
        if (position2 == 19)
        {
            tab[4][17] = b;
        }
        else if (position2 == 31)
        {
            tab[4][173] = b;
        }
    }
    //////////////////////////////////////////////////////////////////////////////////////
    if (position3 >= 0 && position3 <= 10)
    {
        if (position3 == 0)
        {
            tab[23][176] = c;
        }
        else if (position3 == 1)
        {
            tab[23][151] = c;
        }
        else if (position3 == 2)
        {
            tab[23][137] = c;
        }
        else if (position3 == 3)
        {
            tab[23][113] = c;
        }
        else if (position3 == 4)
        {
            tab[23][101] = c;
        }
        else if (position3 == 5)
        {
            tab[23][91] = c;
        }
        else if (position3 == 6)
        {
            tab[23][75] = c;
        }
        else if (position3 == 7)
        {
            tab[23][62] = c;
        }
        else if (position3 == 8)
        {
            tab[23][46] = c;
        }
        else if (position3 == 9)
        {
            tab[23][32] = c;
        }
        else if (position3 == 10)
        {
            tab[23][10] = c;
        }
    }
    else if (position3 >= 20 && position3 <= 30)
    {
        if (position3 == 20)
        {
            tab[2][6] = c;
        }
        else if (position3 == 21)
        {
            tab[2][27] = c;
        }
        else if (position3 == 22)
        {
            tab[2][39] = c;
        }
        else if (position3 == 23)
        {
            tab[2][54] = c;
        }
        else if (position3 == 24)
        {
            tab[2][72] = c;
        }
        else if (position3 == 25)
        {
            tab[2][89] = c;
        }
        else if (position3 == 26)
        {
            tab[2][104] = c;
        }
        else if (position3 == 27)
        {
            tab[2][120] = c;
        }
        else if (position3 == 28)
        {
            tab[2][135] = c;
        }
        else if (position3 == 29)
        {
            tab[2][148] = c;
        }
        else if (position1 == 30)
        {
            tab[2][164] = c;
        }
    }
    else if (position3 == 11 || position3 == 39)
    {
        if (position3 == 11)
        {
            tab[20][18] = c;
        }
        else if (position3 == 39)
        {
            tab[20][174] = c;
        }
    }
    else if (position3 == 12 || position3 == 38)
    {
        if (position3 == 12)
        {
            tab[18][18] = c;
        }
        else if (position3 == 38)
        {
            tab[18][174] = c;
        }
    }
    else if (position3 == 13 || position3 == 37)
    {
        if (position3 == 13)
        {
            tab[16][18] = c;
        }
        else if (position3 == 37)
        {
            tab[16][174] = c;
        }
    }
    else if (position3 == 14 || position3 == 36)
    {
        if (position3 == 14)
        {
            tab[14][18] = c;
        }
        else if (position3 == 36)
        {
            tab[14][174] = c;
        }
    }
    else if (position3 == 15 || position3 == 35)
    {
        if (position3 == 15)
        {
            tab[12][18] = c;
        }
        else if (position3 == 35)
        {
            tab[12][174] = c;
        }
    }
    else if (position3 == 16 || position3 == 34)
    {
        if (position3 == 16)
        {
            tab[10][18] = c;
        }
        else if (position3 == 34)
        {
            tab[10][174] = c;
        }
    }
    else if (position3 == 17 || position3 == 33)
    {
        if (position3 == 17)
        {
            tab[8][18] = c;
        }
        else if (position3 == 33)
        {
            tab[8][174] = c;
        }
    }
    else if (position3 == 18 || position3 == 32)
    {
        if (position3 == 18)
        {
            tab[6][18] = c;
        }
        else if (position3 == 32)
        {
            tab[6][174] = c;
        }
    }
    else if (position3 == 19 || position3 == 31)
    {
        if (position3 == 19)
        {
            tab[4][18] = c;
        }
        else if (position3 == 31)
        {
            tab[4][174] = c;
        }
    }
 /////////////////////// ////  ///////////////////////////////////////////////////////////
    if (position4 >= 0 && position4 <= 10)
    {
        if (position4 == 0)
        {
            tab[23][175] = d;
        }
        else if (position4 == 1)
        {
            tab[23][150] = d;
        }
        else if (position4 == 2)
        {
            tab[23][136] = d;
        }
        else if (position4 == 3)
        {
            tab[23][112] = d;
        }
        else if (position4 == 4)
        {
            tab[23][100] = d;
        }
        else if (position4 == 5)
        {
            tab[23][90] = d;
        }
        else if (position4 == 6)
        {
            tab[23][74] = d;
        }
        else if (position4 == 7)
        {
            tab[23][61] = d;
        }
        else if (position4 == 8)
        {
            tab[23][45] = d;
        }
        else if (position4 == 9)
        {
            tab[23][31] = d;
        }
        else if (position4 == 10)
        {
            tab[23][9] = d;
        }
    }
    else if (position4 >= 20 && position4 <= 30)
    {
        if (position4 == 20)
        {
            tab[2][7] = d;
        }
        else if (position4 == 21)
        {
            tab[2][28] = d;
        }
        else if (position4 == 22)
        {
            tab[2][40] = d;
        }
        else if (position4 == 23)
        {
            tab[2][55] = d;
        }
        else if (position4 == 24)
        {
            tab[2][73] = d;
        }
        else if (position4 == 25)
        {
            tab[2][90] = d;
        }
        else if (position4 == 26)
        {
            tab[2][105] = d;
        }
        else if (position4 == 27)
        {
            tab[2][111] = d;
        }
        else if (position4 == 28)
        {
            tab[2][136] = d;
        }
        else if (position4 == 29)
        {
            tab[2][149] = d;
        }
        else if (position1 == 30)
        {
            tab[2][165] = d;
        }
    }
    else if (position4 == 11 || position4 == 39)
    {
        if (position4 == 11)
        {
            tab[20][19] = d;
        }
        else if (position4 == 39)
        {
            tab[20][175] = d;
        }
    }
    else if (position4 == 12 || position4 == 38)
    {
        if (position4 == 12)
        {
            tab[18][19] = d;
        }
        else if (position4 == 38)
        {
            tab[18][175] = d;
        }
    }
    else if (position4 == 13 || position4 == 37)
    {
        if (position4 == 13)
        {
            tab[16][19] = d;
        }
        else if (position4 == 37)
        {
            tab[16][175] = d;
        }
    }
    else if (position4 == 14 || position4 == 36)
    {
        if (position4 == 14)
        {
            tab[14][19] = d;
        }
        else if (position4 == 36)
        {
            tab[14][175] = d;
        }
    }
    else if (position4 == 15 || position4 == 35)
    {
        if (position4 == 15)
        {
            tab[12][19] = d;
        }
        else if (position4 == 35)
        {
            tab[12][175] = d;
        }
    }
    else if (position4 == 16 || position4 == 34)
    {
        if (position4 == 16)
        {
            tab[10][19] = d;
        }
        else if (position4 == 34)
        {
            tab[10][175] = d;
        }
    }
    else if (position4 == 17 || position4 == 33)
    {
        if (position4 == 17)
        {
            tab[8][19] = d;
        }
        else if (position4 == 33)
        {
            tab[8][175] = d;
        }
    }
    else if (position4 == 18 || position4 == 32)
    {
        if (position4 == 18)
        {
            tab[6][19] = d;
        }
        else if (position4 == 32)
        {
            tab[6][175] = d;
        }
    }
    else if (position4 == 19 || position4 == 31)
    {
        if (position4 == 19)
        {
            tab[4][19] = d;
        }
        else if (position4 == 31)
        {
            tab[4][175] = d;
        }
    }
 ////////////////////////////////////////////////////////////////////////////////////
    for (i = 0; i < H; i++)
    { // une boucle pour afficher le tableau
        printf("%s", tab[i]);
        puts("\n");
    }
} 

