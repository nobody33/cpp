/*
 Programme : Échange de deux nombres
 But :  échanger deux valeurs données
 Date de dernière modification : 14/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double valeur1; //la première valeur choisi
    double valeur2; //la deuxième valeur choisi
    double temporaire; //une variable qui nous servira à stocker temporairement une des deux valeurs

    // TRAITEMENTS
    // clavier >> saisirValeur1 >> valeur1
    cout << "Saisir la première valeur" << endl;
    cin >> valeur1;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //clavier >> saisirValeur2 >> valeur2
    cout << "saisir la deuxième valeur" << endl;
    cin >> valeur2;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    // valeur1; valeur2 >> echangerLesValeurs >> valeur1; valeur2
    temporaire = valeur1;
    valeur1 = valeur2;
    valeur2 = temporaire;

    // valeur1 >> afiicherValeur1 >> (écran)
    cout << "la valeur1 vaut " << valeur1 << endl;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    // valeur2 >> afficherValeur2 >> (écran)
    cout << "la valeur2 vaut " << valeur2 << endl;

    return 0;
}
