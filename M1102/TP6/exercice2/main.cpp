/*
 Programme :incrémenter des valeurs négatives d'un tableau
 But :trouver les valeurs négative d'un tableau et les incrémenter de 1
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

    //incrémenter les valeurs négative de 1
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
