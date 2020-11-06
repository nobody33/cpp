/*
 Programme :incr�menter des valeurs n�gatives d'un tableau
 But :trouver les valeurs n�gative d'un tableau et les incr�menter de 1
 Date de derni�re modification :13/10/17
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

    //incr�menter les valeurs n�gative de 1
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        if (tableau [caseCourante] < 0)
        {
            tableau [caseCourante] = tableau [caseCourante] +1;
        }
    }

    //tableau >> afficherTableau >> ecran
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        cout << "la case " << caseCourante + 1 << " contient la valeur : " << tableau [caseCourante] << endl;
        cout << endl;
    }

    return 0;
}
