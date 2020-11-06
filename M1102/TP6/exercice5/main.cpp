/*
 Programme :inverser un tableau
 But :inverser les valaurs d'un tableau
 Date de dernière modification :13/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    unsigned int nombreDeCase;//le nombre de case du tableau
    int valeur;//la valeur a introduire dans la case
    unsigned int caseCourante = 0; //la case actuelle
    int x;//mémoire temporaire pour les valeurs

    // TRAITEMENTS
    //clavier >> initialiserTableau >> tableau
    cout << "entrez le nombre de valeur à remplir dans le tableau" << endl;
    cin >> nombreDeCase;
    cout << endl;
    int tableau [nombreDeCase] ;//déclaration du tableau

    //clavier >> saisirValeur >> valeur
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        cout << "indiquer la valeur à entrer dans la case" << caseCourante + 1 << ":" << endl;
        cin >> valeur;
        cout << endl;
        tableau [caseCourante] = valeur;
    }

    //tableau >> inverserLesValeurs >> tableau
    for (caseCourante = 0; caseCourante <= (nombreDeCase - 1)/2; caseCourante++)
    {
        x = tableau [caseCourante];
        tableau [caseCourante] = tableau [nombreDeCase - caseCourante];
        tableau [nombreDeCase - caseCourante] = x;
    }

    //tableau >> afficherTableau >> ecran
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        cout << "la case " << caseCourante + 1 << " contient la valeur : " << tableau [caseCourante] << endl;
        cout << endl;
    }

    return 0;
}
