/*
 Programme :parité d'un nombre
 But :determiner si un nombre est pair
 Date de dernière modification :27/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

string nbPair (int nb)
{
    string resultat;
    if (nb % 2 == 0)
    {
        resultat = "pair";
    }
    else
    {
        resultat = "impair";
    }
    return resultat;
}

int main (void)
{
    // VARIABLES
    int X;

    // TRAITEMENTS
    cout << "une valeur svp" << endl;
    cin >> X;
    cout << endl;
    cout << "la valeur " << X << " est " << nbPair(X);

    return 0;
}
