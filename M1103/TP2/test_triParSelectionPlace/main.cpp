#include <iostream>
#include "../definitionsTypes.h"
#include "../bibliothequeTableaux.h"


using namespace std;

int main()
{
    /* 5 Tableaux d'entiers pour tester les tris */

    const unsigned short int TAILLE = 10;
    int monTab [TAILLE] = {7, -6, 8, 10, 2, -3, 6, 9, 0, 1}; // non tri� sans doublons
//    int monTab [TAILLE] = {7, -6, 8, 10, 2, -6, 10, -6, 7, 1}; // non tri� avec doublons sur valeur mini
//    int monTab [TAILLE] = {-6, -3, 0, 2, 2, 6, 7, 8, 9, 10}; //d�j� tri� croissant
//    int monTab [TAILLE] = {10, 9, 8, 7, 6, 2, 2, 0, -3, -6}; //tri� d�croissant
//    int monTab [TAILLE] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8}; //tri� (constant)


    cout << "============================================= " << endl ;
    cout << "         TRI PAR SELECTION DE PLACE           " << endl ;
    cout << "============================================= " << endl << endl << endl;

    cout << "---------- Test sur tableau d'entiers ----------" << endl;
    // tab, TAILLE >> afficher tableau >> (�cran)
    cout << "AVANT, monTab = " ;
    afficherTableau(monTab, TAILLE);
    cout << endl;

    // tab, TAILLE >> afficher tableau >> (�cran)
    cout << "APRES tri croissant, monTab = " ;
    afficherTableau(monTab, TAILLE);
    cout << endl << endl ;

    return 0;
}
