
/*
 Programme :valeur absolue
 But :determiner la valeur absolue d'une valeur nb
 Date de dernière modification :27/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

double valeurAbs (double nb)
{
    double valeurAbsTrouvee;
    if (nb > 0)
    {
        valeurAbsTrouvee = nb;
    }
    else
    {
        valeurAbsTrouvee = -nb;
    }
    return (valeurAbsTrouvee);
}
//retourne la valeur absolue d'une valeur absolue

int main (void)
{
    // VARIABLES
    double X;

    // TRAITEMENTS
    cout << "une valeur svp" << endl;
    cin >> X;
    cout << endl;
    cout << "la valeur absolue de " << X << " est " << valeurAbs (X);

    return 0;
}
