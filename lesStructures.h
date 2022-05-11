
typedef struct lesCases lesCases;
struct lesCases
{   
    char nomCase[200]; 
    char couleurDelaCase[100];
    int typeCouleur ; 
    int prixDachat ;
    int loyerSimple ; 
    int loyerAvecGroupe ; 
    int loyerAvecUneMaison ; 
    int loyerAvecDeuxMaison; 
    int loyerAvecTroisMaison ; 
    int loyerAvecQuatreMaison ; 
    int loyerAvecHotel ; 
    int typeDeCase ; 
    int occupe ; 
    int prixmaison ; 
    int prixHotel ; 
    int prixHypo ; 
    int prixLeverHypo ; 
    int prixEnchere ;
    int recCom ;
    int recChan ; 
    int maisonConst; 
    int tabCouleur[7] ; 

    

    
    
    
}; 

typedef struct Joueur Joueur ; 
struct Joueur
{
    char nom[100]; 
    int position ; 
    int banquier ;
    char symbole ; 
    int argent ; 
    int couleurVert ; 
    int couleurBlueciel ; 
    int couleurGris; 
    int couleurBlue ; 
    int couleurViolet ; 
    int couleurCyan  ; 
    int couleurRouge ; 
    int couleurJaune ; 
    int tabAcqui[40] ; 
    int cartePrison ;
    int enPrison;
    int abandonne ;
    int participe; 


}; 


