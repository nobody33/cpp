/*
 Programme :
 But :
 Date de derni�re modification :
 Auteur :
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
    unsigned int valeurNegative = 0;//le nombre de valeur n�gative dans le tableau

    // TRAITEMENTS
    //clavier >> initialiserTableau >> tableau
    cout << "entrez le nombre de valeur � remplir dans le tableau" << endl;
    cin >> nombreDeCase;
    cout << endl;
    int tableau [nombreDeCase] ;//d�claration du tableau

    //clavier >> saisirValeur >> valeur
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        cout << "indiquer la valeur � entrer dans la case" << caseCourante + 1 << ":" << endl;
        cin >> valeur;
        cout << endl;
        tableau [caseCourante] = valeur;
    }

    //tableau >> compterLesValeursNegative >> valeurNegative
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        if (tableau [caseCourante] < 0)
        {
            valeurNegative = valeurNegative + 1;
        }
    }

    //tableau >> afficherTableau >> ecran
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        cout << "la case " << caseCourante + 1 << " contient la valeur : " << tableau [caseCourante] << endl;
        cout << endl;
    }

    cout << "il y a " << valeurNegative << " valeur(s) n�gatives dans le tableau." << endl;

    return 0;
}
