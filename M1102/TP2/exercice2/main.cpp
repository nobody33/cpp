/*
 Programme : �change de deux nombres
 But :  �changer deux valeurs donn�es
 Date de derni�re modification : 14/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double valeur1; //la premi�re valeur choisi
    double valeur2; //la deuxi�me valeur choisi
    double temporaire; //une variable qui nous servira � stocker temporairement une des deux valeurs

    // TRAITEMENTS
    // clavier >> saisirValeur1 >> valeur1
    cout << "Saisir la premi�re valeur" << endl;
    cin >> valeur1;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    //clavier >> saisirValeur2 >> valeur2
    cout << "saisir la deuxi�me valeur" << endl;
    cin >> valeur2;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    // valeur1; valeur2 >> echangerLesValeurs >> valeur1; valeur2
    temporaire = valeur1;
    valeur1 = valeur2;
    valeur2 = temporaire;

    // valeur1 >> afiicherValeur1 >> (�cran)
    cout << "la valeur1 vaut " << valeur1 << endl;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    // valeur2 >> afficherValeur2 >> (�cran)
    cout << "la valeur2 vaut " << valeur2 << endl;

    return 0;
}
