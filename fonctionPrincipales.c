#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FonctionPrincipales.h"
#include <ctype.h>
#include "lesStructures.h"
#include <time.h>

int verfieLeNombreJoueur(char *a)
{ //Fonction pour vérifier si la saisie est un nombre entre 1 et 4 ! on passe un tableau comme argument elle retourne un entier 0/1
  char b = a[0];
  int nombreDesJoueur = (int)b - 48; // // Retourne la vrai valeur avec la table ASCII
  int x = strlen(a);
  if (x > 1)
  {
    return 0; //FAUX on pousse l'utilisateur à saisir un seul caractère
  }

  else if (nombreDesJoueur <= 1 || nombreDesJoueur > 4) //Simple Condition
  {
    return 0; // Faux on retourne 0
  }
  else
  {
    return nombreDesJoueur; // juste on retourne la valeurs entiere qu'on a convertie
  }
}

int jetteLesDee()
{

  return rand() % 6 + 1;
}

int verfieChoix(char *a, int b)
{ //Fonction pour vérifier si la saisie est correcte 
  char k = a[0];
  int choix = (int)k - 48;
  int x = strlen(a);
  // il faut récuperer les informations ! et les exploiter... un peu lourd mais fonctionnel :D
  if (b == 2) // NB JOUEURS = 2
  {
    if (x > 1)
    {
      printf("TANT PIS, LAISSONS LE HASARD DÉCIDER\n");
      return rand() % 1 + 1;
    }

    else if (choix == 1) //Simple Condition
    {
      return 1;
    }
    else if (choix == 2)
    {
      return 2;
    }
    else
    {
      printf("TANT PIS, LAISSONS LE HASARD DÉCIDER\n");
      return rand() % 1 + 1;
    }
  }
  else if (b == 3) // NB JOEURS = 3
  {
    if (x > 1)
    {
      printf("TANT PIS, LAISSONS LE HASARD DÉCIDER\n");
      return rand() % 2 + 1;
    }

    else if (choix == 1) //Simple Condition
    {
      return 1;
    }
    else if (choix == 2)
    {
      return 2;
    }
    else if (choix == 3)
    {
      return 3;
    }
    else
    {
      printf("TANT PIS, LAISSONS LE HASARD DÉCIDER\n");
      return rand() % 2 + 1;
    }
  }
  else if (b == 4) // NB JOEURS = 4
  {
    if (x > 1)
    {
      printf("TANT PIS, LAISSONS LE HASARD DÉCIDER\n");
      return rand() % 3 + 1;
    }

    else if (choix == 1) //Simple Condition
    {
      return 1;
    }
    else if (choix == 2)
    {
      return 2;
    }
    else if (choix == 3)
    {
      return 3;
    }
    else if (choix == 4)
    {
      return 4;
    }
    else
    {
      printf("TANT PIS, LAISSONS LE HASARD DÉCIDER\n");
      return rand() % 3 + 1;
    }
  }
}
char getSymbole(char *a)
{

  return a[0];
}
int ChoixaAction(char *a) // choix action pour l'achat ou enchère. 
{ //Fonction pour vérifier si la saisie est correcte 
  char k = a[0];
  int choix = (int)k - 48;
  int x = strlen(a);
    if (x > 1 )
    {
      return 0;
    }
    else if (choix == 1)
    {
      return 1;
    }
    else if(choix == 2)
    {
      return 2;
    }
    else
    {
      return 0 ;
    }
    
  
}
