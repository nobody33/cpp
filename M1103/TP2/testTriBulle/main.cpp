#include <iostream>
#include "../definitionsTypes.h"
#include "../bibliothequeTableaux.h"


using namespace std;

int main()
{
    /** 5 Tableaux d'entiers et 1 tableau de personnes pour tester les tris */

    const unsigned short int TAILLE = 10;
    int monTab [TAILLE] = {7, -6, 8, 10, 2, -3, 6, 9, 0, 1}; // non tri� sans doublons
//    int monTab [TAILLE] = {7, -6, 8, 10, 2, -6, 10, -6, 7, 1}; // non tri� avec doublons sur valeur mini
//    int monTab [TAILLE] = {-6, -3, 0, 2, 2, 6, 7, 8, 9, 10}; //d�j� tri� croissant
//    int monTab [TAILLE] = {10, 9, 8, 7, 6, 2, 2, 0, -3, -6}; //tri� d�croissant
//    int monTab [TAILLE] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8}; //tri� (constant)

    UnePersonne monAgenda[TAILLE] =
    {
        {"Etcheverry", "Patrick", {2, "allee des alouettes",64100, "Bayonne"}, 3},
        {"Laplace", "Sophie", {12, "rue des arenes",64240, "Hasparren"}, 3},
        {"Alimi", "Chakib", {41, "allee de la patisserie",64250, "Itxassou"}, 3},
        {"Dijon-Duboue", "Simone", {5, "rue des roses",64600, "Anglet"}, 2},
        {"Marquesuzaa", "Christophe", {8, "avenue d'Anglet",64600, "Anglet"}, 2},
        {"Corbineau", "Sandrine", {23, "allee des fleurs",64100, "Bayonne"}, 1},
        {"Urruty", "Damien", {6, "rue des lilas",64240, "Hasparren"}, 2},
        {"Lopisteguy", "Philippe", {1, "avenue d'Anglet",64600, "Anglet"}, 3},
        {"Dagorret", "Pantxika", {10, "chemin des bois",64250, "Itxassou"}, 2},
        {"Bruyere", "Marie", {4, "rue de la musique",64240, "Hasparren"}, 3},
    };



    cout << "============================================= " << endl ;
    cout << "                  TRI BULLE                   " << endl ;
    cout << "============================================= " << endl << endl << endl;

    cout << "---------- Test sur tableau d'entiers ----------" << endl;
    // tab, TAILLE >> afficher tableau >> (�cran)
    cout << "AVANT, monTab = " ;
    afficherTableau(monTab, TAILLE);
    cout << endl;

    // tab, TAILLE >> tri Bulle CROISSANT >> monTab
    triBulle(monTab, TAILLE);

    // tab, TAILLE >> afficher tableau >> (�cran)
    cout << "APRES tri croissant, monTab = " ;
    afficherTableau(monTab, TAILLE);
    cout << endl << endl ;

    // Question 12
    afficherTableau(monAgenda, TAILLE);


    //Question 13
    cout << "---------- Tableau de personnes ----------" << endl;
    // tab, TAILLE >> afficher tableau >> (�cran)
    cout << "AVANT, mon agenda = " ;
    afficherTableau(monAgenda, TAILLE);
    cout << endl;

    //   monAgenda, TAILLE >> tri CROISSANT selon le NOM >> monAgenda
    triBulle_nom(monAgenda, TAILLE);

    // tab, TAILLE >> afficher tableau >> (�cran)
    cout << "APRES tri croissant selon le NOM , mon agenda = " ;
    afficherTableau(monAgenda, TAILLE);


    // Question 14
    //   monAgenda, TAILLE >> tri CROISSANT selon la VILLE >> monAgenda
    triBulle_ville(monAgenda, TAILLE);

    // tab, TAILLE >> afficher tableau >> (�cran)
    cout << "APRES tri croissant selon la VILLE , mon agenda = " ;
    afficherTableau(monAgenda, TAILLE);

    return 0;
}
